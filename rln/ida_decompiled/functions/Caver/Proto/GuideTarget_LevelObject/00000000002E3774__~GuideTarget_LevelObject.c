/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3774
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObjectD0Ev
 * Demangled: Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FAF60  Caver::Proto::GuideTarget_LevelObject::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000002E377C string=0x00000000002E3780 " "
 *   insn=0x00000000002E3780 string=0x00000000002E3784 ""
 *   insn=0x00000000002E3788 string=0x00000000002E378C "A"
 *   insn=0x00000000002E378C string=0x00000000002E3790 "h"
 *   insn=0x00000000002E3794 string=0x00000000001FAF60 "0'"
 *   insn=0x00000000002E379C string=0x00000000001F7600 "0'"
 *   insn=0x00000000002E37AC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E37CC string=0x00000000002E37D0 "=x\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject(
        Caver::Proto::GuideTarget_LevelObject *this)
{
  *(_QWORD *)this = off_6C69D0;
  Caver::Proto::GuideTarget_LevelObject::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

