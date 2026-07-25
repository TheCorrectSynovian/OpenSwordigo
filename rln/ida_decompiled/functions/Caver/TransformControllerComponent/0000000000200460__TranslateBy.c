/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200460
 * Mangled: ._ZN5Caver28TransformControllerComponent11TranslateByERKNS_7Vector3Ef
 * Demangled: Caver::TransformControllerComponent::TranslateBy(Caver::Vector3 const&,float)
 *
 * Callers: 1
 *   0x000000000022EAB8  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *
 * Callees: 1
 *   0x0000000000241100  Caver::TransformControllerComponent::TranslateBy(Caver::Vector3 const&,float)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200464 string=0x0000000000241100 ""
 *   insn=0x0000000000200468 string=0x000000000020046C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TransformControllerComponent::TranslateBy(
        Caver::TransformControllerComponent *this,
        const Caver::Vector3 *a2,
        float a3)
{
  return _ZN5Caver28TransformControllerComponent11TranslateByERKNS_7Vector3Ef(this, a2, a3);
}

