import PyPDF2
def open_pdf():
    path=r'C:/Users/dell/AppData/Local/Microsoft/Windows/INetCache/IE/NWT6VWG7/Certificate[1].pdf'
    f=open(path,'rb')
    reader = PyPDF2.PdfReader(f)
    text=""
    for page in reader.pages:
        text+=page.extract_text()
    print(text)
open_pdf()