/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318480
 * Mangled: _ZN5Caver5Proto22PhysicsObjectComponentD0Ev
 * Demangled: Caver::Proto::PhysicsObjectComponent::~PhysicsObjectComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000318508  Caver::Proto::PhysicsObjectComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x0000000000318488 string=0x000000000031848C "h"
 *   insn=0x000000000031848C string=0x0000000000318490 ""
 *   insn=0x0000000000318494 string=0x0000000000318498 "A"
 *   insn=0x0000000000318498 string=0x000000000031849C "h"
 *   insn=0x000000000031849C string=0x00000000003184A0 "h"
 *   insn=0x00000000003184A0 string=0x00000000003184A4 ""
 *   insn=0x00000000003184A4 string=0x00000000003184A8 ""
 *   insn=0x00000000003184B0 string=0x00000000003184B4 "`\n@"
 *   insn=0x00000000003184B8 string=0x00000000003184BC ""
 *   insn=0x00000000003184BC string=0x00000000003184C0 ""
 *   insn=0x00000000003184C8 string=0x00000000003184CC "M|"
 *   insn=0x00000000003184CC string=0x00000000001F7600 "0'"
 *   insn=0x00000000003184D8 string=0x00000000003184DC "u{"
 *   insn=0x00000000003184DC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003184E4 string=0x00000000003184E8 "F|"
 *   insn=0x00000000003184F8 string=0x00000000003184FC "m{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PhysicsObjectComponent::~PhysicsObjectComponent(
        Caver::Proto::PhysicsObjectComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C82F8;
  if ( (Caver::Proto::PhysicsObjectComponent *)Caver::Proto::PhysicsObjectComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

