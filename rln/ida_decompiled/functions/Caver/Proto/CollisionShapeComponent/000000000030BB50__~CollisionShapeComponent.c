/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030BB50
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponentD0Ev
 * Demangled: Caver::Proto::CollisionShapeComponent::~CollisionShapeComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x000000000030BB5C string=0x000000000030BB60 ""
 *   insn=0x000000000030BB64 string=0x000000000030BB68 "A"
 *   insn=0x000000000030BB68 string=0x000000000030BB6C "h"
 *   insn=0x000000000030BB70 string=0x000000000030BB74 ""
 *   insn=0x000000000030BB74 string=0x000000000030BB78 ""
 *   insn=0x000000000030BB80 string=0x000000000030BB84 "`"
 *   insn=0x000000000030BB88 string=0x000000000030BB8C ""
 *   insn=0x000000000030BB88 string=0x000000000030BB98 "`"
 *   insn=0x000000000030BB8C string=0x000000000030BB90 ""
 *   insn=0x000000000030BB9C string=0x000000000030BBA0 ""
 *   insn=0x000000000030BB9C string=0x000000000030BBAC "`"
 *   insn=0x000000000030BBA0 string=0x000000000030BBA4 ""
 *   insn=0x000000000030BBB0 string=0x000000000030BBB4 ""
 *   insn=0x000000000030BBB4 string=0x000000000030BBB8 ""
 *   insn=0x000000000030BBC4 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030BBD4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030BBF4 string=0x000000000030BBF8 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CollisionShapeComponent::~CollisionShapeComponent(
        Caver::Proto::CollisionShapeComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x0

  *(_QWORD *)this = off_6C7A88;
  if ( (Caver::Proto::CollisionShapeComponent *)Caver::Proto::CollisionShapeComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 5);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *((_QWORD *)this + 7);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

