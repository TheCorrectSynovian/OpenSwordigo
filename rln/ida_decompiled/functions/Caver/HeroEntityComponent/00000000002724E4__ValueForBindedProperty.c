/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002724E4
 * Mangled: _ZN5Caver19HeroEntityComponent22ValueForBindedPropertyEi
 * Demangled: Caver::HeroEntityComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x0000000000202610  Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 4
 *   insn=0x00000000002724E4 string=0x00000000002724E8 "a"
 *   insn=0x00000000002724E8 string=0x00000000002724F4 "G@"
 *   insn=0x00000000002724EC string=0x00000000002724F0 "@ "
 *   insn=0x00000000002724F0 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEntityComponent::ValueForBindedProperty(
        Caver::HeroEntityComponent *this,
        const Caver::Program *a2)
{
  if ( (_DWORD)a2 == 100 )
    return Caver::BindingValue::ValueWithProgram((Caver::HeroEntityComponent *)((char *)this + 336), a2);
  else
    return Caver::EntityComponent::ValueForBindedProperty(this, (int)a2);
}

