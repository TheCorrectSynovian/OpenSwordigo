/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022C7CC
 * Mangled: _ZN5Caver27OverlayTargetArrowComponentD2Ev
 * Demangled: Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent()
 *
 * Callers: 1
 *   0x00000000001F6500  Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent()
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000022CAB4  Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 91
 *   insn=0x000000000022C7DC string=0x000000000022C7E0 "mF"
 *   insn=0x000000000022C7E4 string=0x000000000022C7E8 "tV@"
 *   insn=0x000000000022C7E8 string=0x000000000022C7EC "\n"
 *   insn=0x000000000022C7EC string=0x000000000022C7F0 "\tA"
 *   insn=0x000000000022C7F0 string=0x000000000022C7F4 "@"
 *   insn=0x000000000022C7F4 string=0x000000000022C7F8 ""
 *   insn=0x000000000022C7FC string=0x000000000022C800 "i"
 *   insn=0x000000000022C800 string=0x000000000022C804 "`"
 *   insn=0x000000000022C804 string=0x000000000022C808 "T"
 *   insn=0x000000000022C808 string=0x000000000022C850 "tR@"
 *   insn=0x000000000022C80C string=0x000000000022C810 "@"
 *   insn=0x000000000022C814 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000022C818 string=0x000000000022C81C "@"
 *   insn=0x000000000022C828 string=0x000000000022C82C "@"
 *   insn=0x000000000022C82C string=0x000000000022C830 ""
 *   insn=0x000000000022C830 string=0x000000000022C834 ""
 *   insn=0x000000000022C838 string=0x000000000022C83C ""
 *   insn=0x000000000022C83C string=0x000000000022C840 ""
 *   insn=0x000000000022C84C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022C850 string=0x000000000022C854 "T"
 *   insn=0x000000000022C854 string=0x000000000022C89C "`J@"
 *   insn=0x000000000022C858 string=0x000000000022C85C "@"
 *   insn=0x000000000022C864 string=0x000000000022C868 "@"
 *   insn=0x000000000022C874 string=0x000000000022C878 "@"
 *   insn=0x000000000022C878 string=0x000000000022C87C ""
 *   insn=0x000000000022C87C string=0x000000000022C880 ""
 *   insn=0x000000000022C884 string=0x000000000022C888 ""
 *   insn=0x000000000022C888 string=0x000000000022C88C ""
 *   insn=0x000000000022C8A0 string=0x000000000022C8A4 "@"
 *   insn=0x000000000022C8A0 string=0x000000000022C8C0 "t"
 *   insn=0x000000000022C8A4 string=0x000000000022C8A8 ""
 *   insn=0x000000000022C8A8 string=0x000000000022C8AC ""
 *   insn=0x000000000022C8B0 string=0x000000000022C8B4 ""
 *   insn=0x000000000022C8B4 string=0x000000000022C8B8 ""
 *   insn=0x000000000022C8C8 string=0x000000000022C900 "t"
 *   insn=0x000000000022C8D0 string=0x000000000022C8D4 "@"
 *   insn=0x000000000022C8D4 string=0x000000000022C8D8 ""
 *   insn=0x000000000022C8D8 string=0x000000000022C8DC ""
 *   insn=0x000000000022C8E0 string=0x000000000022C8E4 ""
 *   insn=0x000000000022C8E4 string=0x000000000022C8E8 ""
 *   insn=0x000000000022C8F8 string=0x000000000022C8FC "t>@"
 *   insn=0x000000000022C900 string=0x000000000022C90C "`:@"
 *   insn=0x000000000022C904 string=0x000000000022C908 "j*"
 *   insn=0x000000000022C910 string=0x000000000022C914 "@"
 *   insn=0x000000000022C914 string=0x000000000022C918 ""
 *   insn=0x000000000022C918 string=0x000000000022C91C ""
 *   insn=0x000000000022C920 string=0x000000000022C924 ""
 *   insn=0x000000000022C924 string=0x000000000022C928 ""
 *   insn=0x000000000022C940 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000022C950 string=0x000000000022C9AC "A*"
 *   insn=0x000000000022C95C string=0x000000000022C960 "T*"
 *   insn=0x000000000022C960 string=0x000000000022C964 "uR@"
 *   insn=0x000000000022C964 string=0x000000000022C968 "U"
 *   insn=0x000000000022C968 string=0x000000000022C9B0 "`J@"
 *   insn=0x000000000022C96C string=0x000000000022C970 "@"
 *   insn=0x000000000022C970 string=0x000000000022C974 "{!"
 *   insn=0x000000000022C978 string=0x000000000022C97C "@"
 *   insn=0x000000000022C97C string=0x000000000022C980 "x!"
 *   insn=0x000000000022C988 string=0x000000000022C98C "@"
 *   insn=0x000000000022C98C string=0x000000000022C990 ""
 *   insn=0x000000000022C990 string=0x000000000022C994 ""
 *   insn=0x000000000022C998 string=0x000000000022C99C ""
 *   insn=0x000000000022C99C string=0x000000000022C9A0 ""
 *   insn=0x000000000022C9B0 string=0x000000000022C9B4 " "
 *   insn=0x000000000022C9B4 string=0x000000000022C9B8 "@"
 *   insn=0x000000000022C9B4 string=0x000000000022C9F8 "u"
 *   insn=0x000000000022C9B8 string=0x000000000022C9BC ""
 *   insn=0x000000000022C9BC string=0x000000000022C9C0 ""
 *   insn=0x000000000022C9C4 string=0x000000000022C9C8 ""
 *   insn=0x000000000022C9C8 string=0x000000000022C9CC ""
 *   insn=0x000000000022C9D0 string=0x000000000022C9D4 "\t"
 *   insn=0x000000000022C9DC string=0x000000000022C9E0 "4*"
 *   insn=0x000000000022C9E4 string=0x000000000022C9E8 "Y"
 *   insn=0x000000000022C9EC string=0x000000000022C9F0 "*"
 *   insn=0x000000000022CA08 string=0x000000000022CA0C "@"
 *   insn=0x000000000022CA0C string=0x000000000022CA10 ""
 *   insn=0x000000000022CA10 string=0x000000000022CA14 ""
 *   insn=0x000000000022CA18 string=0x000000000022CA1C ""
 *   insn=0x000000000022CA1C string=0x000000000022CA20 ""
 *   insn=0x000000000022CA30 string=0x000000000022CA34 "u>@"
 *   insn=0x000000000022CA38 string=0x000000000022CA74 "`:@"
 *   insn=0x000000000022CA48 string=0x000000000022CA4C ""
 *   insn=0x000000000022CA58 string=0x000000000022CA5C "<"
 *   insn=0x000000000022CA5C string=0x000000000022CA60 "h>@"
 *   insn=0x000000000022CA64 string=0x000000000022CA68 "h"
 *   insn=0x000000000022CA78 string=0x000000000022CA7C "@"
 *   insn=0x000000000022CA7C string=0x000000000022CA80 ""
 *   insn=0x000000000022CA80 string=0x000000000022CA84 ""
 *   insn=0x000000000022CA88 string=0x000000000022CA8C ""
 *   insn=0x000000000022CA8C string=0x000000000022CA90 ""
 *   insn=0x000000000022CAAC string=0x000000000022CAB0 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent(
        Caver::OverlayTargetArrowComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  void *v4; // x0
  void *v5; // x0
  _DWORD *v6; // x0
  int v7; // w8
  _QWORD *v8; // x20
  void *v9; // x0
  void *v10; // x0
  _DWORD *v11; // x0
  int v12; // w8
  _DWORD *v13; // x0
  int v14; // w8
  _QWORD *v15; // x20
  _QWORD *v16; // x21
  _DWORD *v17; // x0
  int v18; // w8
  _DWORD *v19; // x0
  int v20; // w8

  v2 = (_QWORD *)*((_QWORD *)this + 21);
  *(_QWORD *)&v3 = &off_6BAA70;
  *((_QWORD *)&v3 + 1) = &off_6BAAB0;
  *(_QWORD *)this = off_6BA950;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = (void *)v2[7];
    if ( v4 )
      operator delete[](v4);
    v5 = (void *)v2[4];
    if ( v5 )
      operator delete[](v5);
    v6 = (_DWORD *)*v2;
    if ( *v2 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    operator delete(v2);
  }
  v8 = (_QWORD *)*((_QWORD *)this + 20);
  if ( v8 )
  {
    v9 = (void *)v8[7];
    if ( v9 )
      operator delete[](v9);
    v10 = (void *)v8[4];
    if ( v10 )
      operator delete[](v10);
    v11 = (_DWORD *)*v8;
    if ( *v8 )
    {
      v12 = v11[2] - 1;
      v11[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    operator delete(v8);
  }
  v13 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v13 )
  {
    v14 = v13[2] - 1;
    v13[2] = v14;
    if ( !v14 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v15 = (_QWORD *)*((_QWORD *)this + 15);
  v16 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v15 != v16 )
  {
    do
    {
      v17 = (_DWORD *)*v15;
      if ( *v15 )
      {
        v18 = v17[2] - 1;
        v17[2] = v18;
        if ( !v18 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
      }
      ++v15;
    }
    while ( v16 != v15 );
    v15 = (_QWORD *)*((_QWORD *)this + 15);
  }
  if ( v15 )
    operator delete(v15);
  v19 = (_DWORD *)*((_QWORD *)this + 14);
  if ( v19 )
  {
    v20 = v19[2] - 1;
    v19[2] = v20;
    if ( !v20 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
  }
  Caver::Component::~Component(this);
}

