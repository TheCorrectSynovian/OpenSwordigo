/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CD860
 * Mangled: _ZN5Caver20DraggableOverlayItemD2Ev
 * Demangled: Caver::DraggableOverlayItem::~DraggableOverlayItem()
 *
 * Callers: 1
 *   0x0000000000201080  Caver::DraggableOverlayItem::~DraggableOverlayItem()
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003CDB20  Caver::DraggableOverlayItem::~DraggableOverlayItem()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 99
 *   insn=0x00000000003CD86C string=0x00000000003CD870 "T"
 *   insn=0x00000000003CD884 string=0x00000000003CD888 "h.A"
 *   insn=0x00000000003CD888 string=0x00000000003CD88C ")\tD"
 *   insn=0x00000000003CD88C string=0x00000000003CD890 "J"
 *   insn=0x00000000003CD894 string=0x00000000003CD898 ")A"
 *   insn=0x00000000003CD89C string=0x00000000003CD8A0 "i"
 *   insn=0x00000000003CD8A0 string=0x00000000003CD8A4 "a"
 *   insn=0x00000000003CD8A4 string=0x00000000003CD8A8 "`"
 *   insn=0x00000000003CD8A8 string=0x00000000003CD8AC "@"
 *   insn=0x00000000003CD8AC string=0x00000000003CD8B4 "`"
 *   insn=0x00000000003CD8B0 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003CD8B4 string=0x00000000003CD8B8 "@"
 *   insn=0x00000000003CD8B8 string=0x00000000003CD8C0 "`"
 *   insn=0x00000000003CD8C4 string=0x00000000003CD8C8 "@"
 *   insn=0x00000000003CD8C4 string=0x00000000003CD8E4 "`"
 *   insn=0x00000000003CD8C8 string=0x00000000003CD8CC ""
 *   insn=0x00000000003CD8CC string=0x00000000003CD8D0 ""
 *   insn=0x00000000003CD8D4 string=0x00000000003CD8D8 ""
 *   insn=0x00000000003CD8D8 string=0x00000000003CD8DC ""
 *   insn=0x00000000003CD8E8 string=0x00000000003CD8EC "@"
 *   insn=0x00000000003CD8E8 string=0x00000000003CD908 "`"
 *   insn=0x00000000003CD8EC string=0x00000000003CD8F0 ""
 *   insn=0x00000000003CD8F0 string=0x00000000003CD8F4 ""
 *   insn=0x00000000003CD8F8 string=0x00000000003CD8FC ""
 *   insn=0x00000000003CD8FC string=0x00000000003CD900 ""
 *   insn=0x00000000003CD908 string=0x00000000003CD90C "@"
 *   insn=0x00000000003CD90C string=0x00000000003CD914 "`"
 *   insn=0x00000000003CD914 string=0x00000000003CD918 "@"
 *   insn=0x00000000003CD918 string=0x00000000003CD920 "`"
 *   insn=0x00000000003CD924 string=0x00000000003CD928 "@"
 *   insn=0x00000000003CD924 string=0x00000000003CD944 "`"
 *   insn=0x00000000003CD928 string=0x00000000003CD92C ""
 *   insn=0x00000000003CD92C string=0x00000000003CD930 ""
 *   insn=0x00000000003CD934 string=0x00000000003CD938 ""
 *   insn=0x00000000003CD938 string=0x00000000003CD93C ""
 *   insn=0x00000000003CD948 string=0x00000000003CD94C "@"
 *   insn=0x00000000003CD94C string=0x00000000003CD950 ""
 *   insn=0x00000000003CD950 string=0x00000000003CD954 ""
 *   insn=0x00000000003CD958 string=0x00000000003CD95C ""
 *   insn=0x00000000003CD95C string=0x00000000003CD960 ""
 *   insn=0x00000000003CD968 string=0x00000000003CD96C "1"
 *   insn=0x00000000003CD97C string=0x00000000003CD9DC "="
 *   insn=0x00000000003CD990 string=0x00000000003CD994 ")=G"
 *   insn=0x00000000003CD994 string=0x00000000003CD998 "!"
 *   insn=0x00000000003CD99C string=0x00000000003CD9A0 "\t"
 *   insn=0x00000000003CD99C string=0x00000000003CD9B4 "\t"
 *   insn=0x00000000003CD9A0 string=0x00000000003CD9A4 "*"
 *   insn=0x00000000003CD9A4 string=0x00000000003CD9A8 "\n"
 *   insn=0x00000000003CD9B0 string=0x00000000003CD9C0 "?"
 *   insn=0x00000000003CD9B4 string=0x00000000003CD9B8 "*"
 *   insn=0x00000000003CD9B8 string=0x00000000003CD9BC "\n"
 *   insn=0x00000000003CD9C0 string=0x00000000003CD9C4 ","
 *   insn=0x00000000003CD9C8 string=0x00000000003CD9CC "vr"
 *   insn=0x00000000003CD9CC string=0x00000000003CD9D0 "`"
 *   insn=0x00000000003CD9DC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003CD9E0 string=0x00000000003CD9E4 ":"
 *   insn=0x00000000003CD9F0 string=0x00000000003CD9F4 "\t\t@"
 *   insn=0x00000000003CD9F4 string=0x00000000003CD9F8 ")"
 *   insn=0x00000000003CD9F8 string=0x00000000003CD9FC "\t\t"
 *   insn=0x00000000003CD9FC string=0x00000000003CDA00 "a"
 *   insn=0x00000000003CDA00 string=0x00000000003CDA04 "\t"
 *   insn=0x00000000003CDA04 string=0x00000000003CDA08 ")"
 *   insn=0x00000000003CDA0C string=0x00000000003CDA10 " "
 *   insn=0x00000000003CDA10 string=0x00000000003CDA14 "."
 *   insn=0x00000000003CDA1C string=0x00000000003CDA20 "`"
 *   insn=0x00000000003CDA24 string=0x00000000003CDA60 "`"
 *   insn=0x00000000003CDA28 string=0x00000000003CDA74 ";"
 *   insn=0x00000000003CDA30 string=0x00000000003CDA34 "("
 *   insn=0x00000000003CDA34 string=0x00000000003CDA38 "\t\t@"
 *   insn=0x00000000003CDA34 string=0x00000000003CDA58 "`"
 *   insn=0x00000000003CDA38 string=0x00000000003CDA3C ")"
 *   insn=0x00000000003CDA3C string=0x00000000003CDA40 "\t\t"
 *   insn=0x00000000003CDA44 string=0x00000000003CDA48 "\t"
 *   insn=0x00000000003CDA48 string=0x00000000003CDA4C ")"
 *   insn=0x00000000003CDA50 string=0x00000000003CDA54 " "
 *   insn=0x00000000003CDA64 string=0x00000000003CDA68 "`"
 *   insn=0x00000000003CDA64 string=0x00000000003CDA80 "8"
 *   insn=0x00000000003CDA6C string=0x00000000003CDA8C "@"
 *   insn=0x00000000003CDA70 string=0x00000000003CDAA8 "`"
 *   insn=0x00000000003CDA74 string=0x00000000003CDA78 "`"
 *   insn=0x00000000003CDA78 string=0x00000000003CDA7C "`"
 *   insn=0x00000000003CDA80 string=0x00000000003CDA84 "`"
 *   insn=0x00000000003CDA8C string=0x00000000003CDA90 ""
 *   insn=0x00000000003CDA90 string=0x00000000003CDA94 ""
 *   insn=0x00000000003CDA98 string=0x00000000003CDA9C ""
 *   insn=0x00000000003CDA9C string=0x00000000003CDAA0 ""
 *   insn=0x00000000003CDAAC string=0x00000000003CDAB0 "@"
 *   insn=0x00000000003CDAB0 string=0x00000000003CDAB4 ""
 *   insn=0x00000000003CDAB4 string=0x00000000003CDAB8 ""
 *   insn=0x00000000003CDABC string=0x00000000003CDAC0 ""
 *   insn=0x00000000003CDAC0 string=0x00000000003CDAC4 ""
 *   insn=0x00000000003CDAD4 string=0x00000000003CDAD8 "{"
 *   insn=0x00000000003CDADC string=0x00000000003CDAE0 "h"
 *   insn=0x00000000003CDAE8 string=0x00000000003CDAEC "\t\t@"
 *   insn=0x00000000003CDAEC string=0x00000000003CDAF0 ")"
 *   insn=0x00000000003CDAF0 string=0x00000000003CDAF4 "\t\t"
 *   insn=0x00000000003CDAF8 string=0x00000000003CDAFC "\t"
 *   insn=0x00000000003CDAFC string=0x00000000003CDB00 ")"
 *   insn=0x00000000003CDB04 string=0x00000000003CDB08 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DraggableOverlayItem::~DraggableOverlayItem(Caver::DraggableOverlayItem *this)
{
  __int64 v2; // x8
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  _DWORD *v6; // x0
  int v7; // w8
  _DWORD *v8; // x0
  int v9; // w8
  void *v10; // x0
  void *v11; // x0
  _DWORD *v12; // x0
  int v13; // w8
  _DWORD *v14; // x0
  int v15; // w8
  unsigned int *v16; // x8
  int v17; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 75);
  v3 = (void *)(v2 - 24);
  *(_QWORD *)this = off_6CF890;
  if ( (__int64 *)(v2 - 24) == &qword_6FD2E0 )
    goto LABEL_2;
  v16 = (unsigned int *)(v2 - 8);
  if ( &pthread_create )
  {
    do
      v17 = __ldaxr(v16);
    while ( __stlxr(v17 - 1, v16) );
  }
  else
  {
    v17 = (*v16)--;
  }
  if ( v17 > 0 )
  {
LABEL_2:
    v4 = (void *)*((_QWORD *)this + 71);
    if ( !v4 )
      goto LABEL_4;
    goto LABEL_3;
  }
  operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 71);
  if ( v4 )
LABEL_3:
    operator delete[](v4);
LABEL_4:
  v5 = (void *)*((_QWORD *)this + 68);
  if ( v5 )
    operator delete[](v5);
  v6 = (_DWORD *)*((_QWORD *)this + 64);
  if ( v6 )
  {
    v7 = v6[2] - 1;
    v6[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v8 = (_DWORD *)*((_QWORD *)this + 54);
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v10 = (void *)*((_QWORD *)this + 50);
  if ( v10 )
    operator delete[](v10);
  v11 = (void *)*((_QWORD *)this + 47);
  if ( v11 )
    operator delete[](v11);
  v12 = (_DWORD *)*((_QWORD *)this + 43);
  if ( v12 )
  {
    v13 = v12[2] - 1;
    v12[2] = v13;
    if ( !v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  v14 = (_DWORD *)*((_QWORD *)this + 33);
  if ( v14 )
  {
    v15 = v14[2] - 1;
    v14[2] = v15;
    if ( !v15 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  Caver::GUIView::~GUIView(this);
}

