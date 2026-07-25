/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A4F8
 * Mangled: _ZN5Caver5Proto21EntityActionComponentD0Ev
 * Demangled: Caver::Proto::EntityActionComponent::~EntityActionComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000031A580  Caver::Proto::EntityActionComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000031A500 string=0x000000000031A504 "H"
 *   insn=0x000000000031A504 string=0x000000000031A508 "\tE"
 *   insn=0x000000000031A50C string=0x000000000031A510 "A"
 *   insn=0x000000000031A510 string=0x000000000031A514 "h"
 *   insn=0x000000000031A514 string=0x000000000031A518 "H"
 *   insn=0x000000000031A518 string=0x000000000031A51C ""
 *   insn=0x000000000031A51C string=0x000000000031A520 ""
 *   insn=0x000000000031A528 string=0x000000000031A52C "`\n@"
 *   insn=0x000000000031A530 string=0x000000000031A534 ""
 *   insn=0x000000000031A534 string=0x000000000031A538 ""
 *   insn=0x000000000031A540 string=0x000000000031A544 "/t"
 *   insn=0x000000000031A544 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031A550 string=0x000000000031A554 "Ws"
 *   insn=0x000000000031A554 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031A55C string=0x000000000031A560 "(t"
 *   insn=0x000000000031A570 string=0x000000000031A574 "Os"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityActionComponent::~EntityActionComponent(Caver::Proto::EntityActionComponent *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_6C8460;
  if ( (Caver::Proto::EntityActionComponent *)Caver::Proto::EntityActionComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

