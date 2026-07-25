/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C38D0
 * Mangled: _ZN5Caver5Quest23LoadFromProtobufMessageERKNS_5Proto5QuestE
 * Demangled: Caver::Quest::LoadFromProtobufMessage(Caver::Proto::Quest const&)
 *
 * Callers: 1
 *   0x0000000000202440  Caver::Quest::LoadFromProtobufMessage(Caver::Proto::Quest const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 8
 *   insn=0x00000000003C38DC string=0x00000000003C38E0 "a\n@"
 *   insn=0x00000000003C38E8 string=0x00000000003C38EC "o"
 *   insn=0x00000000003C38EC string=0x00000000003C38F0 "a"
 *   insn=0x00000000003C38F4 string=0x00000000003C38F8 "l"
 *   insn=0x00000000003C38F8 string=0x00000000003C38FC "a"
 *   insn=0x00000000003C3900 string=0x00000000003C3904 "i"
 *   insn=0x00000000003C3904 string=0x00000000003C3908 "a"
 *   insn=0x00000000003C3914 string=0x00000000003C3918 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Quest::LoadFromProtobufMessage(Caver::Quest *this, const Caver::Proto::Quest *a2)
{
  sub_56A6A8((char *)this + 8);
  sub_56A6A8((char *)this + 16);
  sub_56A6A8((char *)this + 24);
  return sub_56A6A8((char *)this + 32);
}

