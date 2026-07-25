/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1EB4
 * Mangled: _ZNK5Caver5Proto5Quest3NewEv
 * Demangled: Caver::Proto::Quest::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 14
 *   insn=0x00000000002E1EC0 string=0x00000000002E1EC4 "( "
 *   insn=0x00000000002E1EC0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E1EC4 string=0x00000000002E1EC8 ""
 *   insn=0x00000000002E1EC8 string=0x00000000002E1ECC ") "
 *   insn=0x00000000002E1ECC string=0x00000000002E1ED0 ")"
 *   insn=0x00000000002E1ED4 string=0x00000000002E1ED8 "( "
 *   insn=0x00000000002E1ED8 string=0x00000000002E1EDC ""
 *   insn=0x00000000002E1EE0 string=0x00000000002E1EE4 "!"
 *   insn=0x00000000002E1EE4 string=0x00000000002E1EE8 "A"
 *   insn=0x00000000002E1EE8 string=0x00000000002E1EEC ""
 *   insn=0x00000000002E1EEC string=0x00000000002E1EF0 "( "
 *   insn=0x00000000002E1EF0 string=0x00000000002E1EF4 ""
 *   insn=0x00000000002E1EF8 string=0x00000000002E1EFC " "
 *   insn=0x00000000002E1EFC string=0x00000000002E1F00 "AF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::Quest::New(Caver::Proto::Quest *this)
{
  __int64 v1; // x0
  __int128 v2; // q1
  __n128 result; // q0

  v1 = operator new(0x38u);
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::Quest::_default_name_;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::Quest::_default_follow_up_quest_;
  *(_QWORD *)v1 = off_6C68E0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::Quest::_default_title_;
  *(_DWORD *)(v1 + 48) = 0;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::Quest::_default_map_location_;
  *(__n128 *)(v1 + 16) = result;
  *(_OWORD *)(v1 + 32) = v2;
  return result;
}

