![x2t converter](https://github.com/airslateinc/onlyoffice-core/workflows/X2T/badge.svg)
![Platforms | OS X | Linux](https://img.shields.io/badge/Platforms-%20OS%20X%20%7C%20Linux%20-lightgray.svg?style=flat)

# OnlyOffice Core (airSlate edition)

## X2T Converter (Docx -> PDF with field extract)

### Features:

- Extract fillable field from docx OleObject and writes it as PostScript into PDF

### Build from sources:

- Compile OnlyOffice Core (Ubuntu - GCC 8 / macOs - Clang)
- Go to X2T converter directory: `cd ./X2tConverter`
- Run makefile: `make -f x2tConverter.mk build sdkjs-branch=ovm_fillable_fields`

### Run x2t converter:

- Go to x2t converter build directory: `.X2tConverter/build/{linux_64|mac_64}/`
- Copy you [test docx file][docx_demo_link] to `source` directory with name `input.docx`
- Run: `./x2t ./params.xml`
- See result PDF into `output` folder

[docx_demo_link]: https://artifactory.infrateam.xyz/onlyoffice-core/core/test_documents/docxFields.docx

---

[![License](https://img.shields.io/badge/License-GNU%20AGPL%20V3-green.svg?style=flat)](https://www.gnu.org/licenses/agpl-3.0.en.html)     ![x2tconverter](https://img.shields.io/badge/x2tconverter-v2.0.2.376-blue.svg?style=flat) ![Platforms Windows | OS X | Linux](https://img.shields.io/badge/Platforms-Windows%20%7C%20OS%20X%20%7C%20Linux%20-lightgray.svg?style=flat)

## Core
Server core components which are a part of [ONLYOFFICE Document Server][2]. Enable the conversion between the most popular office document formats: DOC, DOCX, ODT, RTF, TXT, PDF, HTML, EPUB, XPS, DjVu, XLS, XLSX, ODS, CSV, PPT, PPTX, ODP.

## Project Information

Official website: [http://www.onlyoffice.org](http://onlyoffice.org "http://www.onlyoffice.org")

Code repository: [https://github.com/ONLYOFFICE/core](https://github.com/ONLYOFFICE/сore "https://github.com/ONLYOFFICE/core")

SaaS version: [http://www.onlyoffice.com](http://www.onlyoffice.com "http://www.onlyoffice.com")

## User Feedback and Support

If you have any problems with or questions about [ONLYOFFICE Document Server][2], please visit our official forum to find answers to your questions: [dev.onlyoffice.org][1] or you can ask and answer ONLYOFFICE development questions on [Stack Overflow][3].

  [1]: http://dev.onlyoffice.org
  [2]: https://github.com/ONLYOFFICE/DocumentServer
  [3]: http://stackoverflow.com/questions/tagged/onlyoffice
  
## License

Core is released under an GNU AGPL v3.0 license. See the LICENSE file for more information.
