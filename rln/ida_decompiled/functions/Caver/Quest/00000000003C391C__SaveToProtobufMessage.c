/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C391C
 * Mangled: _ZNK5Caver5Quest21SaveToProtobufMessageEPNS_5Proto5QuestE
 * Demangled: Caver::Quest::SaveToProtobufMessage(Caver::Proto::Quest *)
 *
 * Callers: 1
 *   0x00000000001FD750  Caver::Quest::SaveToProtobufMessage(Caver::Proto::Quest *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 49
 *   insn=0x00000000003C392C string=0x00000000003C3930 "\t"
 *   insn=0x00000000003C3934 string=0x00000000003C3938 "h2@"
 *   insn=0x00000000003C3938 string=0x00000000003C393C "`\n@"
 *   insn=0x00000000003C393C string=0x00000000003C3940 ")"
 *   insn=0x00000000003C3944 string=0x00000000003C3948 ""
 *   insn=0x00000000003C3948 string=0x00000000003C394C "h2"
 *   insn=0x00000000003C3958 string=0x00000000003C395C "!"
 *   insn=0x00000000003C395C string=0x00000000003C3960 ""
 *   insn=0x00000000003C395C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003C3960 string=0x00000000003C3964 ""
 *   insn=0x00000000003C3964 string=0x00000000003C3968 "a"
 *   insn=0x00000000003C3968 string=0x00000000003C396C ""
 *   insn=0x00000000003C396C string=0x00000000003C3970 "`\n"
 *   insn=0x00000000003C3974 string=0x00000000003C3978 "L"
 *   insn=0x00000000003C3978 string=0x00000000003C397C "\t"
 *   insn=0x00000000003C397C string=0x00000000003C3980 "h2@"
 *   insn=0x00000000003C3980 string=0x00000000003C3984 "`"
 *   insn=0x00000000003C3984 string=0x00000000003C3988 ")"
 *   insn=0x00000000003C398C string=0x00000000003C3990 ""
 *   insn=0x00000000003C3990 string=0x00000000003C3994 "h2"
 *   insn=0x00000000003C39A4 string=0x00000000003C39A8 ""
 *   insn=0x00000000003C39A8 string=0x00000000003C39AC ""
 *   insn=0x00000000003C39AC string=0x00000000003C39B0 "a"
 *   insn=0x00000000003C39B0 string=0x00000000003C39B4 ""
 *   insn=0x00000000003C39B4 string=0x00000000003C39B8 "`"
 *   insn=0x00000000003C39BC string=0x00000000003C39C0 ":"
 *   insn=0x00000000003C39C0 string=0x00000000003C39C4 "\t"
 *   insn=0x00000000003C39C4 string=0x00000000003C39C8 "h2@"
 *   insn=0x00000000003C39C8 string=0x00000000003C39CC "`"
 *   insn=0x00000000003C39CC string=0x00000000003C39D0 ")"
 *   insn=0x00000000003C39D4 string=0x00000000003C39D8 ""
 *   insn=0x00000000003C39D8 string=0x00000000003C39DC "h2"
 *   insn=0x00000000003C39EC string=0x00000000003C39F0 ""
 *   insn=0x00000000003C39F0 string=0x00000000003C39F4 ""
 *   insn=0x00000000003C39F4 string=0x00000000003C39F8 "a"
 *   insn=0x00000000003C39F8 string=0x00000000003C39FC ""
 *   insn=0x00000000003C39FC string=0x00000000003C3A00 "`"
 *   insn=0x00000000003C3A04 string=0x00000000003C3A08 "("
 *   insn=0x00000000003C3A08 string=0x00000000003C3A0C "\t"
 *   insn=0x00000000003C3A0C string=0x00000000003C3A10 "h2@"
 *   insn=0x00000000003C3A10 string=0x00000000003C3A14 "`"
 *   insn=0x00000000003C3A14 string=0x00000000003C3A18 ")AF"
 *   insn=0x00000000003C3A1C string=0x00000000003C3A20 ""
 *   insn=0x00000000003C3A20 string=0x00000000003C3A24 "h2"
 *   insn=0x00000000003C3A34 string=0x00000000003C3A38 ""
 *   insn=0x00000000003C3A38 string=0x00000000003C3A3C ""
 *   insn=0x00000000003C3A3C string=0x00000000003C3A40 "a"
 *   insn=0x00000000003C3A40 string=0x00000000003C3A44 ""
 *   insn=0x00000000003C3A44 string=0x00000000003C3A48 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Quest::SaveToProtobufMessage(Caver::Quest *this, Caver::Proto::Quest *a2)
{
  __int64 *v3; // x0
  __int64 *v4; // x0
  __int64 *v5; // x0
  __int64 *v6; // x0

  v3 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 12) |= 1u;
  if ( v3 == &Caver::Proto::Quest::_default_name_ )
  {
    v3 = (__int64 *)operator new(8u);
    *v3 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v3;
  }
  sub_56A6A8(v3);
  v4 = (__int64 *)*((_QWORD *)a2 + 3);
  *((_DWORD *)a2 + 12) |= 2u;
  if ( v4 == &Caver::Proto::Quest::_default_title_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 3) = v4;
  }
  sub_56A6A8(v4);
  v5 = (__int64 *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 12) |= 4u;
  if ( v5 == &Caver::Proto::Quest::_default_follow_up_quest_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 4) = v5;
  }
  sub_56A6A8(v5);
  v6 = (__int64 *)*((_QWORD *)a2 + 5);
  *((_DWORD *)a2 + 12) |= 8u;
  if ( v6 == &Caver::Proto::Quest::_default_map_location_ )
  {
    v6 = (__int64 *)operator new(8u);
    *v6 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 5) = v6;
  }
  return sub_56A6A8(v6);
}

