/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337C48
 * Mangled: _ZN5Caver5Proto8MeshDataD0Ev
 * Demangled: Caver::Proto::MeshData::~MeshData()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000337C90  Caver::Proto::MeshData::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000337C54 string=0x0000000000337C58 ""
 *   insn=0x0000000000337C5C string=0x0000000000337C60 "A"
 *   insn=0x0000000000337C60 string=0x0000000000337C64 "h"
 *   insn=0x0000000000337C64 string=0x0000000000337C68 "f"
 *   insn=0x0000000000337C68 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000337C78 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MeshData::~MeshData(Caver::Proto::MeshData *this)
{
  *(_QWORD *)this = off_6C9C48;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

