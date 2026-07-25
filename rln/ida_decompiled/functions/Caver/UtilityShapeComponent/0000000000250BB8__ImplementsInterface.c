/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250BB8
 * Mangled: _ZN5Caver21UtilityShapeComponent19ImplementsInterfaceEl
 * Demangled: Caver::UtilityShapeComponent::ImplementsInterface(long)
 *
 * Callers: 1
 *   0x0000000000250B34  Caver::UtilityShapeComponent::Clone(void)
 *
 * Callees: 2
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *   0x0000000000250C90  Caver::UtilityShapeComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000250BB8 string=0x0000000000250BBC ""
 *   insn=0x0000000000250BC0 string=0x0000000000250BC4 ")!D"
 *   insn=0x0000000000250BC4 string=0x0000000000250BC8 "?"
 *   insn=0x0000000000250BCC string=0x0000000000250BD0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::UtilityShapeComponent::ImplementsInterface(
        Caver::UtilityShapeComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::ShapeComponent *this))(Caver::ShapeComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::UtilityShapeComponent::Interface)
       | (unsigned int)(a2 == Caver::ShapeComponent::Interface);
}

