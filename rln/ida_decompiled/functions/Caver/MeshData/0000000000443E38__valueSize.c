/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443E38
 * Mangled: _ZNK5Caver8MeshData9valueSizeEv
 * Demangled: Caver::MeshData::valueSize(void)
 *
 * Callers: 1
 *   0x00000000001FFAF0  Caver::MeshData::valueSize(void)
 *
 * Callees: 1
 *   0x00000000001FB1D0  Caver::SizeOfDataType(Caver::DataType)
 *
 * Referenced strings: 1
 *   insn=0x0000000000443E3C string=0x00000000001FB1D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshData::valueSize(Caver::MeshData *this)
{
  return Caver::SizeOfDataType();
}

