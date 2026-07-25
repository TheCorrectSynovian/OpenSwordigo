/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3CF4
 * Mangled: _ZNK5Caver5Skill21SaveToProtobufMessageEPNS_5Proto5SkillE
 * Demangled: Caver::Skill::SaveToProtobufMessage(Caver::Proto::Skill *)
 *
 * Callers: 1
 *   0x00000000001FBCF0  Caver::Skill::SaveToProtobufMessage(Caver::Proto::Skill *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 49
 *   insn=0x00000000003C3D04 string=0x00000000003C3D08 "\t"
 *   insn=0x00000000003C3D0C string=0x00000000003C3D10 "h6@"
 *   insn=0x00000000003C3D10 string=0x00000000003C3D14 "`\n@"
 *   insn=0x00000000003C3D14 string=0x00000000003C3D18 ")"
 *   insn=0x00000000003C3D18 string=0x00000000003C3D1C ""
 *   insn=0x00000000003C3D1C string=0x00000000003C3D20 "h6"
 *   insn=0x00000000003C3D2C string=0x00000000003C3D30 ","
 *   insn=0x00000000003C3D30 string=0x00000000003C3D34 ""
 *   insn=0x00000000003C3D30 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003C3D34 string=0x00000000003C3D38 ""
 *   insn=0x00000000003C3D38 string=0x00000000003C3D3C "a"
 *   insn=0x00000000003C3D3C string=0x00000000003C3D40 ""
 *   insn=0x00000000003C3D40 string=0x00000000003C3D44 "`\n"
 *   insn=0x00000000003C3D48 string=0x00000000003C3D4C "W"
 *   insn=0x00000000003C3D4C string=0x00000000003C3D50 ")"
 *   insn=0x00000000003C3D50 string=0x00000000003C3D54 "h6@"
 *   insn=0x00000000003C3D54 string=0x00000000003C3D58 "`"
 *   insn=0x00000000003C3D58 string=0x00000000003C3D5C ")"
 *   insn=0x00000000003C3D60 string=0x00000000003C3D64 ""
 *   insn=0x00000000003C3D64 string=0x00000000003C3D68 "h6"
 *   insn=0x00000000003C3D78 string=0x00000000003C3D7C ""
 *   insn=0x00000000003C3D7C string=0x00000000003C3D80 ""
 *   insn=0x00000000003C3D80 string=0x00000000003C3D84 "a"
 *   insn=0x00000000003C3D84 string=0x00000000003C3D88 ""
 *   insn=0x00000000003C3D88 string=0x00000000003C3D8C "`"
 *   insn=0x00000000003C3D90 string=0x00000000003C3D94 "E"
 *   insn=0x00000000003C3D94 string=0x00000000003C3D98 ")"
 *   insn=0x00000000003C3D98 string=0x00000000003C3D9C "h6@"
 *   insn=0x00000000003C3D9C string=0x00000000003C3DA0 "`"
 *   insn=0x00000000003C3DA0 string=0x00000000003C3DA4 ")"
 *   insn=0x00000000003C3DA8 string=0x00000000003C3DAC ""
 *   insn=0x00000000003C3DAC string=0x00000000003C3DB0 "h6"
 *   insn=0x00000000003C3DBC string=0x00000000003C3DC0 ""
 *   insn=0x00000000003C3DC0 string=0x00000000003C3DC4 ""
 *   insn=0x00000000003C3DC4 string=0x00000000003C3DC8 ""
 *   insn=0x00000000003C3DC8 string=0x00000000003C3DCC "a"
 *   insn=0x00000000003C3DCC string=0x00000000003C3DD0 ""
 *   insn=0x00000000003C3DD0 string=0x00000000003C3DD4 "`"
 *   insn=0x00000000003C3DD8 string=0x00000000003C3DDC "3"
 *   insn=0x00000000003C3DDC string=0x00000000003C3DE0 "i6@"
 *   insn=0x00000000003C3DE4 string=0x00000000003C3DE8 "("
 *   insn=0x00000000003C3DE8 string=0x00000000003C3DEC "h6"
 *   insn=0x00000000003C3DEC string=0x00000000003C3DF0 "j*"
 *   insn=0x00000000003C3DF8 string=0x00000000003C3DFC "("
 *   insn=0x00000000003C3DFC string=0x00000000003C3E00 "h6"
 *   insn=0x00000000003C3E00 string=0x00000000003C3E04 "j."
 *   insn=0x00000000003C3E08 string=0x00000000003C3E0C "i"
 *   insn=0x00000000003C3E0C string=0x00000000003C3E10 ""
 *   insn=0x00000000003C3E10 string=0x00000000003C3E14 "i""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Skill::SaveToProtobufMessage(Caver::Skill *this, Caver::Proto::Skill *a2)
{
  __int64 *v4; // x0
  __int64 *v5; // x0
  __int64 *v6; // x0
  __int64 result; // x0
  int v8; // w9
  int v9; // w10
  int v10; // w8
  int v11; // w10
  int v12; // w9

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 13) |= 1u;
  if ( v4 == &Caver::Proto::Skill::_default_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  sub_56A6A8(v4);
  v5 = (__int64 *)*((_QWORD *)a2 + 3);
  *((_DWORD *)a2 + 13) |= 2u;
  if ( v5 == &Caver::Proto::Skill::_default_title_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 3) = v5;
  }
  sub_56A6A8(v5);
  v6 = (__int64 *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 13) |= 4u;
  if ( v6 == &Caver::Proto::Skill::_default_description_ )
  {
    v6 = (__int64 *)operator new(8u);
    *v6 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 4) = v6;
  }
  result = sub_56A6A8(v6);
  v8 = *((_DWORD *)a2 + 13);
  v9 = *((_DWORD *)this + 6);
  v10 = v8 | 8;
  *((_DWORD *)a2 + 13) = v8 | 8;
  *((_DWORD *)a2 + 10) = v9;
  v11 = *((_DWORD *)this + 7);
  if ( v11 )
  {
    v10 = v8 | 0x18;
    *((_DWORD *)a2 + 13) = v8 | 0x18;
    *((_DWORD *)a2 + 11) = v11;
  }
  v12 = *((_DWORD *)this + 8);
  if ( v12 )
  {
    *((_DWORD *)a2 + 12) = v12;
    *((_DWORD *)a2 + 13) = v10 | 0x20;
  }
  return result;
}

