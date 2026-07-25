/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFCF0
 * Mangled: ._ZNK5Caver5Proto11EntityClass8ByteSizeEv
 * Demangled: Caver::Proto::EntityClass::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002E78D8  Caver::Proto::GameData::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002E3160  Caver::Proto::EntityClass::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFCF8 string=0x00000000001FFCFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::EntityClass::ByteSize(Caver::Proto::EntityClass *this)
{
  return _ZNK5Caver5Proto11EntityClass8ByteSizeEv(this);
}

