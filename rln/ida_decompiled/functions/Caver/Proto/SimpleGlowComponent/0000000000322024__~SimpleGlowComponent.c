/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322024
 * Mangled: _ZN5Caver5Proto19SimpleGlowComponentD0Ev
 * Demangled: Caver::Proto::SimpleGlowComponent::~SimpleGlowComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003220C0  Caver::Proto::SimpleGlowComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000032202C string=0x0000000000322030 "("
 *   insn=0x0000000000322030 string=0x0000000000322034 ""
 *   insn=0x0000000000322038 string=0x000000000032203C "A"
 *   insn=0x000000000032203C string=0x0000000000322040 "h"
 *   insn=0x0000000000322040 string=0x0000000000322044 ""
 *   insn=0x0000000000322044 string=0x0000000000322048 ""
 *   insn=0x0000000000322048 string=0x000000000032204C ""
 *   insn=0x0000000000322050 string=0x0000000000322054 "`"
 *   insn=0x0000000000322054 string=0x0000000000322058 "`\n@"
 *   insn=0x000000000032205C string=0x0000000000322060 ""
 *   insn=0x000000000032205C string=0x000000000032206C "`"
 *   insn=0x0000000000322060 string=0x0000000000322064 ""
 *   insn=0x0000000000322070 string=0x0000000000322074 ""
 *   insn=0x0000000000322074 string=0x0000000000322078 ""
 *   insn=0x0000000000322080 string=0x0000000000322084 "_U"
 *   insn=0x0000000000322084 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000322094 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032209C string=0x00000000003220A0 "XU"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SimpleGlowComponent::~SimpleGlowComponent(Caver::Proto::SimpleGlowComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)this = off_6C8910;
  if ( (Caver::Proto::SimpleGlowComponent *)Caver::Proto::SimpleGlowComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

