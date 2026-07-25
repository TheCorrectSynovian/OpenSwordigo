/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030A2B4
 * Mangled: _ZN5Caver5Proto18WaterMeshComponentD0Ev
 * Demangled: Caver::Proto::WaterMeshComponent::~WaterMeshComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000030A350  Caver::Proto::WaterMeshComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x000000000030A2C0 string=0x000000000030A2C4 "iG"
 *   insn=0x000000000030A2C8 string=0x000000000030A2CC "A"
 *   insn=0x000000000030A2CC string=0x000000000030A2D0 "h"
 *   insn=0x000000000030A2D4 string=0x000000000030A2D8 ""
 *   insn=0x000000000030A2D8 string=0x000000000030A2DC ""
 *   insn=0x000000000030A2E0 string=0x000000000030A2E4 "`"
 *   insn=0x000000000030A2E4 string=0x000000000030A2E8 "`"
 *   insn=0x000000000030A2EC string=0x000000000030A2F0 ""
 *   insn=0x000000000030A2EC string=0x000000000030A2FC "`"
 *   insn=0x000000000030A2F0 string=0x000000000030A2F4 ""
 *   insn=0x000000000030A300 string=0x000000000030A304 ""
 *   insn=0x000000000030A304 string=0x000000000030A308 ""
 *   insn=0x000000000030A314 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030A324 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030A348 string=0x000000000030A34C "^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WaterMeshComponent::~WaterMeshComponent(Caver::Proto::WaterMeshComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)this = off_6C7998;
  if ( (Caver::Proto::WaterMeshComponent *)Caver::Proto::WaterMeshComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

