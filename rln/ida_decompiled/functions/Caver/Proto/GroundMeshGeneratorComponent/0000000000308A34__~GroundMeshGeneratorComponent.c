/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000308A34
 * Mangled: _ZN5Caver5Proto28GroundMeshGeneratorComponentD0Ev
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000308A7C  Caver::Proto::GroundMeshGeneratorComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000308A40 string=0x0000000000308A44 ""
 *   insn=0x0000000000308A48 string=0x0000000000308A4C "A"
 *   insn=0x0000000000308A4C string=0x0000000000308A50 "h"
 *   insn=0x0000000000308A54 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000308A64 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent(
        Caver::Proto::GroundMeshGeneratorComponent *this)
{
  *(_QWORD *)this = off_6C78A8;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

