//
// PROJECT:         Aspia
// FILE:            protocol/file_reply_receiver_proxy.cc
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#include "client/file_reply_receiver_proxy.h"

namespace aspia {

FileReplyReceiverProxy::FileReplyReceiverProxy(FileReplyReceiver* receiver)
    : receiver_(receiver)
{
    // Nothing
}

void FileReplyReceiverProxy::WillDestroyCurrentReplyReceiver()
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);
    receiver_ = nullptr;
}

bool FileReplyReceiverProxy::OnDriveListReply(
    std::shared_ptr<proto::file_transfer::DriveList> drive_list,
    proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnDriveListReply(std::move(drive_list), status);
    return true;
}

bool FileReplyReceiverProxy::OnFileListReply(
    const std::experimental::filesystem::path& path,
    std::shared_ptr<proto::file_transfer::FileList> file_list,
    proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnFileListReply(path, std::move(file_list), status);
    return true;
}

bool FileReplyReceiverProxy::OnDirectorySizeReply(
    const std::experimental::filesystem::path& path,
    uint64_t size,
    proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnDirectorySizeReply(path, size, status);
    return true;
}

bool FileReplyReceiverProxy::OnCreateDirectoryReply(
    const std::experimental::filesystem::path& path,
    proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnCreateDirectoryReply(path, status);
    return true;
}

bool FileReplyReceiverProxy::OnRemoveReply(
    const std::experimental::filesystem::path& path,
    proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnRemoveReply(path, status);
    return true;
}

bool FileReplyReceiverProxy::OnRenameReply(
    const std::experimental::filesystem::path& old_name,
    const std::experimental::filesystem::path& new_name,
    proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnRenameReply(old_name, new_name, status);
    return true;
}

bool FileReplyReceiverProxy::OnFileUploadReply(
    const std::experimental::filesystem::path& file_path,
    proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnFileUploadReply(file_path, status);
    return true;
}

bool FileReplyReceiverProxy::OnFileDownloadReply(
    const std::experimental::filesystem::path& file_path,
    proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnFileDownloadReply(file_path, status);
    return true;
}

bool FileReplyReceiverProxy::OnFilePacketSended(uint32_t flags,
                                                proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnFilePacketSended(flags, status);
    return true;
}

bool FileReplyReceiverProxy::OnFilePacketReceived(
    std::shared_ptr<proto::file_transfer::FilePacket> file_packet,
    proto::file_transfer::Status status)
{
    std::scoped_lock<std::mutex> lock(receiver_lock_);

    if (!receiver_)
        return false;

    receiver_->OnFilePacketReceived(std::move(file_packet), status);
    return true;
}

} // namespace aspia
