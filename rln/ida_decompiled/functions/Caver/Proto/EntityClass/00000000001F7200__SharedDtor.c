/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7200
 * Mangled: ._ZN5Caver5Proto11EntityClass10SharedDtorEv
 * Demangled: Caver::Proto::EntityClass::SharedDtor(void)
 *
 * Callers: 2
 *   0x00000000002E2624  Caver::Proto::EntityClass::EntityClass(Caver::Proto::EntityClass const&)
 *   0x00000000002E2A40  Caver::Proto::EntityClass::~EntityClass()
 *
 * Callees: 1
 *   0x00000000002E2624  Caver::Proto::EntityClass::EntityClass(Caver::Proto::EntityClass const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7208 string=0x00000000001F720C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EntityClass::SharedDtor(Caver::Proto::EntityClass *this)
{
  JUMPOUT(0x2E28FC);
}

