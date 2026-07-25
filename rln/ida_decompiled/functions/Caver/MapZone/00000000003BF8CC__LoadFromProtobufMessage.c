/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BF8CC
 * Mangled: _ZN5Caver7MapZone23LoadFromProtobufMessageERKNS_5Proto7MapZoneE
 * Demangled: Caver::MapZone::LoadFromProtobufMessage(Caver::Proto::MapZone const&)
 *
 * Callers: 1
 *   0x0000000000200C00  Caver::MapZone::LoadFromProtobufMessage(Caver::Proto::MapZone const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 9
 *   insn=0x00000000003BF8D8 string=0x00000000003BF8DC "a\n@"
 *   insn=0x00000000003BF8E0 string=0x00000000003BF8E4 "q"
 *   insn=0x00000000003BF8E4 string=0x00000000003BF8E8 "a"
 *   insn=0x00000000003BF8EC string=0x00000000003BF8F0 "n"
 *   insn=0x00000000003BF8F0 string=0x00000000003BF8F4 "h"
 *   insn=0x00000000003BF8F4 string=0x00000000003BF8F8 "h"
 *   insn=0x00000000003BF8F8 string=0x00000000003BF8FC "hZ@"
 *   insn=0x00000000003BF8F8 string=0x00000000003BF904 "a2@"
 *   insn=0x00000000003BF910 string=0x00000000003BF914 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapZone::LoadFromProtobufMessage(Caver::MapZone *this, const Caver::Proto::MapZone *a2)
{
  sub_56A6A8(this);
  sub_56A6A8((char *)this + 8);
  if ( (*((_BYTE *)a2 + 104) & 8) != 0 )
    *((_DWORD *)this + 10) = *((_DWORD *)a2 + 22);
  return sub_56A6A8((char *)this + 48);
}

