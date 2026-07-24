/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573a8c
 * Function: Caver::SceneObject::ExpandBoundsToIncludeLocalAABB
 * Signature: undefined __thiscall ExpandBoundsToIncludeLocalAABB(SceneObject * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::ExpandBoundsToIncludeLocalAABB(Caver::Rectangle const&) */

void __thiscall
Caver::SceneObject::ExpandBoundsToIncludeLocalAABB(SceneObject *this,Rectangle *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
                    /* catch() { ... } // from try @ 00572e7c with catch @ 00573a8c */
                    /* catch() { ... } // from try @ 00572e74 with catch @ 00573a90 */
                    /* catch() { ... } // from try @ 00572e90 with catch @ 00573a94
                       catch() { ... } // from try @ 00572ed4 with catch @ 00573a94 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = Rectangle::RectangleInside((Rectangle *)(this + 0x94),param_1);
  if ((uVar2 & 1) == 0) {
    uStack_48 = *(undefined8 *)(this + 0x9c);
    local_50 = *(undefined8 *)(this + 0x94);
    Rectangle::ExpandToincludeRectangle((Rectangle *)&local_50,param_1);
                    /* catch() { ... } // from try @ 00573574 with catch @ 00573ad4 */
    setLocalAABB(this,(Rectangle *)&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


