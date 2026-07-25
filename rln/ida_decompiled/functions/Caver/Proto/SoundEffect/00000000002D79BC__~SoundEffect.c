/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D79BC
 * Mangled: _ZN5Caver5Proto11SoundEffectD0Ev
 * Demangled: Caver::Proto::SoundEffect::~SoundEffect()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FF510  Caver::Proto::SoundEffect::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002D79C4 string=0x00000000002D79C8 "h "
 *   insn=0x00000000002D79C8 string=0x00000000002D79CC ""
 *   insn=0x00000000002D79D0 string=0x00000000002D79D4 "A"
 *   insn=0x00000000002D79D4 string=0x00000000002D79D8 "h"
 *   insn=0x00000000002D79E0 string=0x00000000002D79E4 ""
 *   insn=0x00000000002D79E4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D79F0 string=0x00000000002D79F4 "/~"
 *   insn=0x00000000002D79F4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D7A0C string=0x00000000002D7A10 "(~"
 *   insn=0x00000000002D7A18 string=0x00000000002D7A1C "L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SoundEffect::~SoundEffect(Caver::Proto::SoundEffect *this)
{
  *(_QWORD *)this = off_6C6110;
  Caver::Proto::SoundEffect::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

