/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC154
 * Mangled: _ZN5Caver5Proto15StatePropertiesD0Ev
 * Demangled: Caver::Proto::StateProperties::~StateProperties()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202E90  Caver::Proto::StateProperties::~StateProperties()
 *   0x00000000002EC18C  Caver::Proto::StateProperties::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002EC160 string=0x00000000002EC164 "K["
 *   insn=0x00000000002EC170 string=0x00000000002EC174 "O,"
 *   insn=0x00000000002EC174 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002EC17C string=0x00000000002EC180 "L,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::StateProperties::~StateProperties(Caver::Proto::StateProperties *this)
{
  Caver::Proto::StateProperties::~StateProperties(this);
  operator delete(this);
}

