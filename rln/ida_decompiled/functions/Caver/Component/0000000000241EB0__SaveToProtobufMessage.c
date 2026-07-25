/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241EB0
 * Mangled: _ZNK5Caver9Component21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 78
 *   insn=0x0000000000241EC0 string=0x0000000000241EC4 "U"
 *   insn=0x0000000000241ED8 string=0x0000000000241EDC "\t"
 *   insn=0x0000000000241EE0 string=0x0000000000241EE4 " "
 *   insn=0x0000000000241EE4 string=0x0000000000241EE8 ")%"
 *   insn=0x0000000000241EE8 string=0x0000000000241EEC "hZ@"
 *   insn=0x0000000000241EEC string=0x0000000000241EF0 "`"@"
 *   insn=0x0000000000241EF0 string=0x0000000000241EF4 ")"
 *   insn=0x0000000000241EF4 string=0x0000000000241EF8 ""
 *   insn=0x0000000000241EF8 string=0x0000000000241EFC "hZ"
 *   insn=0x0000000000241F0C string=0x0000000000241F10 "(%"
 *   insn=0x0000000000241F0C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000241F10 string=0x0000000000241F14 ""
 *   insn=0x0000000000241F14 string=0x0000000000241F18 "a"
 *   insn=0x0000000000241F18 string=0x0000000000241F1C ""
 *   insn=0x0000000000241F1C string=0x0000000000241F20 "`""
 *   insn=0x0000000000241F2C string=0x0000000000241F30 "6%"
 *   insn=0x0000000000241F40 string=0x0000000000241F44 "hZ@"
 *   insn=0x0000000000241F40 string=0x0000000000241FF4 "\t%"
 *   insn=0x0000000000241F48 string=0x0000000000241F4C "\n"
 *   insn=0x0000000000241F4C string=0x0000000000241F50 "jZ"
 *   insn=0x0000000000241F50 string=0x0000000000241F54 "iJ"
 *   insn=0x0000000000241F5C string=0x0000000000241F60 ""
 *   insn=0x0000000000241F60 string=0x0000000000241F64 "hZ"
 *   insn=0x0000000000241F64 string=0x0000000000241F68 "iN"
 *   insn=0x0000000000241F6C string=0x0000000000241F70 ""
 *   insn=0x0000000000241F7C string=0x0000000000241F80 "j"
 *   insn=0x0000000000241F80 string=0x0000000000241F84 ")%"
 *   insn=0x0000000000241F84 string=0x0000000000241F88 "hZ@"
 *   insn=0x0000000000241F88 string=0x0000000000241F8C "`*@"
 *   insn=0x0000000000241F8C string=0x0000000000241F90 ")"
 *   insn=0x0000000000241F90 string=0x0000000000241F94 ""
 *   insn=0x0000000000241F94 string=0x0000000000241F98 "hZ"
 *   insn=0x0000000000241FAC string=0x0000000000241FB0 ""
 *   insn=0x0000000000241FB0 string=0x0000000000241FB4 "`*"
 *   insn=0x0000000000241FC8 string=0x0000000000241FCC "a"
 *   insn=0x0000000000241FCC string=0x0000000000242018 "\t%"
 *   insn=0x0000000000241FF4 string=0x0000000000241FF8 ")=G"
 *   insn=0x0000000000241FF8 string=0x0000000000241FFC "!"
 *   insn=0x0000000000242000 string=0x0000000000242004 "\t"
 *   insn=0x0000000000242000 string=0x000000000024203C "\t"
 *   insn=0x0000000000242004 string=0x0000000000242008 "*"
 *   insn=0x0000000000242008 string=0x000000000024200C "\n"
 *   insn=0x0000000000242010 string=0x0000000000242014 ""
 *   insn=0x0000000000242014 string=0x0000000000242048 "?"
 *   insn=0x0000000000242018 string=0x000000000024201C ")=G"
 *   insn=0x000000000024201C string=0x0000000000242020 "!"
 *   insn=0x0000000000242024 string=0x0000000000242028 "\t"
 *   insn=0x0000000000242024 string=0x000000000024205C "\t"
 *   insn=0x0000000000242028 string=0x000000000024202C "*"
 *   insn=0x000000000024202C string=0x0000000000242030 "\n"
 *   insn=0x0000000000242038 string=0x0000000000242068 "?"
 *   insn=0x000000000024203C string=0x0000000000242040 "*"
 *   insn=0x0000000000242040 string=0x0000000000242044 "\n"
 *   insn=0x000000000024205C string=0x0000000000242060 "*"
 *   insn=0x0000000000242060 string=0x0000000000242064 "\n"
 *   insn=0x0000000000242068 string=0x000000000024206C ","
 *   insn=0x000000000024207C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000242084 string=0x0000000000242088 "(a"
 *   insn=0x0000000000242090 string=0x0000000000242094 "\n%"
 *   insn=0x0000000000242094 string=0x0000000000242098 "J=G"
 *   insn=0x0000000000242098 string=0x000000000024209C ")!"
 *   insn=0x00000000002420A0 string=0x00000000002420A4 "*"
 *   insn=0x00000000002420A0 string=0x0000000000242110 "*"
 *   insn=0x00000000002420A4 string=0x00000000002420A8 "K"
 *   insn=0x00000000002420A8 string=0x00000000002420AC "+"
 *   insn=0x00000000002420B4 string=0x00000000002420F4 "_"
 *   insn=0x00000000002420B8 string=0x00000000002420BC "\n%"
 *   insn=0x00000000002420BC string=0x00000000002420C0 "J"
 *   insn=0x00000000002420C4 string=0x00000000002420C8 "(a"
 *   insn=0x00000000002420D0 string=0x00000000002420D4 "\n%"
 *   insn=0x00000000002420D4 string=0x00000000002420D8 "J=G"
 *   insn=0x00000000002420D8 string=0x00000000002420DC ")!"
 *   insn=0x00000000002420E0 string=0x00000000002420E4 "*"
 *   insn=0x00000000002420E4 string=0x00000000002420E8 "K"
 *   insn=0x00000000002420E8 string=0x00000000002420EC "+"
 *   insn=0x0000000000242110 string=0x0000000000242114 "K"
 *   insn=0x0000000000242114 string=0x0000000000242118 "+"
 *   insn=0x0000000000242118 string=0x000000000024211C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Component::SaveToProtobufMessage(Caver::Component *this, Caver::Proto::Component *a2)
{
  __int64 *v4; // x0
  void *v5; // x0
  int v6; // w8
  int v7; // w9
  int v8; // w9
  __int64 *v9; // x0
  void *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  _QWORD v15[3]; // [xsp+8h] [xbp-38h] BYREF

  v15[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  (*(void (__fastcall **)(_QWORD *__return_ptr))(*(_QWORD *)this + 256LL))(v15);
  v4 = (__int64 *)*((_QWORD *)a2 + 8);
  *((_DWORD *)a2 + 22) |= 1u;
  if ( v4 == &Caver::Proto::Component::_default_class_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 8) = v4;
  }
  sub_56A6A8(v4);
  v5 = (void *)(v15[0] - 24LL);
  if ( (__int64 *)(v15[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v15[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v5);
  }
  v6 = *((_DWORD *)a2 + 22);
  v7 = *((_DWORD *)this + 8);
  *((_DWORD *)a2 + 22) = v6 | 2;
  *((_DWORD *)a2 + 18) = v7;
  v8 = *((_DWORD *)this + 9);
  if ( v8 )
  {
    *((_DWORD *)a2 + 22) = v6 | 6;
    *((_DWORD *)a2 + 19) = v8;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 7) - 24LL) )
  {
    sub_56A528(v15, (char *)this + 56);
    v9 = (__int64 *)*((_QWORD *)a2 + 10);
    *((_DWORD *)a2 + 22) |= 8u;
    if ( v9 == &Caver::Proto::Component::_default_label_ )
    {
      v9 = (__int64 *)operator new(8u);
      *v9 = (__int64)&byte_6FD2F8;
      *((_QWORD *)a2 + 10) = v9;
    }
    sub_56A6A8(v9);
    v10 = (void *)(v15[0] - 24LL);
    if ( (__int64 *)(v15[0] - 24LL) != &qword_6FD2E0 )
    {
      v13 = (unsigned int *)(v15[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
      }
      else
      {
        v14 = (*v13)--;
      }
      if ( v14 <= 0 )
        operator delete(v10);
    }
  }
}

