/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002724F8
 * Mangled: _ZThn16_N5Caver19HeroEntityComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::HeroEntityComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x0000000000202610  Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 4
 *   insn=0x00000000002724FC string=0x0000000000272500 "a"
 *   insn=0x0000000000272500 string=0x000000000027250C "A@"
 *   insn=0x0000000000272504 string=0x0000000000272508 ": "
 *   insn=0x0000000000272508 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::HeroEntityComponent::ValueForBindedProperty(
        Caver::HeroEntityComponent *this,
        const Caver::Program *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 == 100 )
    return Caver::BindingValue::ValueWithProgram((Caver::BindingValue *)(v2 + 336), a2);
  else
    return Caver::EntityComponent::ValueForBindedProperty((Caver::EntityComponent *)v2, (int)a2);
}

