/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335858
 * Mangled: _ZN5Caver5Proto29ProjectileControllerComponentD0Ev
 * Demangled: Caver::Proto::ProjectileControllerComponent::~ProjectileControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003358A0  Caver::Proto::ProjectileControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000335864 string=0x0000000000335868 ""
 *   insn=0x000000000033586C string=0x0000000000335870 "A"
 *   insn=0x0000000000335870 string=0x0000000000335874 "h"
 *   insn=0x0000000000335874 string=0x0000000000335878 "b"
 *   insn=0x0000000000335878 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000335888 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000335898 string=0x000000000033589C "\n0\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ProjectileControllerComponent::~ProjectileControllerComponent(
        Caver::Proto::ProjectileControllerComponent *this)
{
  *(_QWORD *)this = off_6C9978;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

