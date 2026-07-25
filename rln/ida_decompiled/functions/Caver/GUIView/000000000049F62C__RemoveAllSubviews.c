/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049F62C
 * Mangled: _ZN5Caver7GUIView17RemoveAllSubviewsEv
 * Demangled: Caver::GUIView::RemoveAllSubviews(void)
 *
 * Callers: 1
 *   0x00000000001FB4E0  Caver::GUIView::RemoveAllSubviews(void)
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 12
 *   insn=0x000000000049F654 string=0x000000000049F658 "\t\t@"
 *   insn=0x000000000049F658 string=0x000000000049F65C "?-"
 *   insn=0x000000000049F65C string=0x000000000049F660 ""
 *   insn=0x000000000049F66C string=0x000000000049F670 " "
 *   insn=0x000000000049F670 string=0x000000000049F6D4 "vZ"
 *   insn=0x000000000049F678 string=0x000000000049F67C "5"
 *   insn=0x000000000049F680 string=0x000000000049F684 ""
 *   insn=0x000000000049F694 string=0x000000000049F698 "\t@"
 *   insn=0x000000000049F6A0 string=0x000000000049F6A4 ""
 *   insn=0x000000000049F6B4 string=0x000000000049F6B8 "@"
 *   insn=0x000000000049F6C4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049F6CC string=0x000000000049F6D0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIView::RemoveAllSubviews(Caver::GUIView *this)
{
  char *v2; // x20
  char *v3; // x22
  char *v4; // x8
  _QWORD *v5; // x21
  char *v6; // x23
  __int64 v7; // x8
  __int64 v8; // x8

  v3 = (char *)this + 32;
  v2 = (char *)*((_QWORD *)this + 4);
  if ( (char *)this + 32 != v2 )
  {
    v4 = (char *)*((_QWORD *)this + 4);
    do
    {
      *(_QWORD *)(*((_QWORD *)v4 + 2) + 88LL) = 0;
      v4 = *(char **)v4;
    }
    while ( v3 != v4 );
  }
  if ( v2 != v3 )
  {
    do
    {
      v5 = (_QWORD *)*((_QWORD *)v2 + 3);
      v6 = *(char **)v2;
      if ( v5 )
      {
        v7 = v5[1] - 1LL;
        v5[1] = v7;
        if ( !v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
          v8 = v5[2] - 1LL;
          v5[2] = v8;
          if ( !v8 )
            (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
        }
      }
      operator delete(v2);
      v2 = v6;
    }
    while ( v6 != v3 );
  }
  *((_QWORD *)this + 4) = v3;
  *((_QWORD *)this + 5) = v3;
}

