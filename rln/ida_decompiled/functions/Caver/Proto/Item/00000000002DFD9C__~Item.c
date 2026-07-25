/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DFD9C
 * Mangled: _ZN5Caver5Proto4ItemD0Ev
 * Demangled: Caver::Proto::Item::~Item()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002004F0  Caver::Proto::Item::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002DFDA4 string=0x00000000002DFDA8 "H "
 *   insn=0x00000000002DFDA8 string=0x00000000002DFDAC "}A"
 *   insn=0x00000000002DFDB0 string=0x00000000002DFDB4 "A"
 *   insn=0x00000000002DFDB4 string=0x00000000002DFDB8 "h"
 *   insn=0x00000000002DFDC4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002DFDD0 string=0x00000000002DFDD4 "7]"
 *   insn=0x00000000002DFDD4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002DFDEC string=0x00000000002DFDF0 "0]"
 *   insn=0x00000000002DFDF8 string=0x00000000002DFDFC "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Item::~Item(Caver::Proto::Item *this)
{
  *(_QWORD *)this = off_6C67F0;
  Caver::Proto::Item::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

