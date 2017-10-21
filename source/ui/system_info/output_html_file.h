//
// PROJECT:         Aspia Remote Desktop
// FILE:            ui/system_info/output_html_file.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_UI__SYSTEM_INFO__OUTPUT_HTML_FILE_H
#define _ASPIA_UI__SYSTEM_INFO__OUTPUT_HTML_FILE_H

#include "base/macros.h"
#include "ui/system_info/output.h"

namespace aspia {

class OutputHtmlFile : protected Output
{
public:
    OutputHtmlFile(const std::wstring& file_path);
    ~OutputHtmlFile() = default;

protected:
    // Output implementation.
    void StartDocument() final;
    void EndDocument() final;
    void StartTable(const std::string& name) final;
    void EndTable() final;
    void StartTableHeader() final;
    void EndTableHeader() final;
    void AddHeaderItem(const std::string& name, int width) final;
    void StartGroup(const std::string& name, Category::IconId icon_id) final;
    void EndGroup() final;
    void AddParam(Category::IconId icon_id,
                  const std::string& param,
                  const std::string& value,
                  const char* unit) final;
    void StartRow(Category::IconId icon_id) final;
    void EndRow() final;
    void AddValue(const std::string& value, const char* unit) final;

private:
    DISALLOW_COPY_AND_ASSIGN(OutputHtmlFile);
};

} // namespace aspia

#endif // _ASPIA_UI__SYSTEM_INFO__OUTPUT_HTML_FILE_H