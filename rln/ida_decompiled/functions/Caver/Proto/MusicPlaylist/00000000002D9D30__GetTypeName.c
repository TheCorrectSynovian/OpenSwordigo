/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9D30
 * Mangled: _ZNK5Caver5Proto13MusicPlaylist11GetTypeNameEv
 * Demangled: Caver::Proto::MusicPlaylist::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002D9D3C string=0x00000000002D9D40 "S"
 *   insn=0x00000000002D9D40 string=0x00000000002D9D44 "i"
 *   insn=0x00000000002D9D4C string=0x000000000058A5C0 "Caver.Proto.MusicPlaylist"
 *   insn=0x00000000002D9D5C string=0x00000000002D9D60 "h"
 *   insn=0x00000000002D9D6C string=0x00000000002D9D80 "Tq"
 *   insn=0x00000000002D9D80 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MusicPlaylist::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MusicPlaylist");
}

