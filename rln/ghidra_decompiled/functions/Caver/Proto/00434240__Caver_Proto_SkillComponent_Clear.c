/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434240
 * Function: Caver::Proto::SkillComponent::Clear
 * Signature: undefined __thiscall Clear(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::Clear() */

void __thiscall Caver::Proto::SkillComponent::Clear(SkillComponent *this)

{
  SkillComponent SVar1;
  long *plVar2;
  uint uVar3;
  
  SVar1 = this[0x20];
  uVar3 = (uint)(byte)SVar1;
  if (SVar1 != (SkillComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    if ((((byte)SVar1 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10),
       plVar2 != (long *)PTR__default_cast_object_template_name__007e65a8)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x20);
    }
    if (((uVar3 >> 2 & 1) != 0) && (*(Vector2 **)(this + 0x18) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x18));
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


