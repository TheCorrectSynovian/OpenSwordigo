/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056584c
 * Function: Caver::Scene::UpdateObjectWorldBounds
 * Signature: undefined __thiscall UpdateObjectWorldBounds(Scene * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::UpdateObjectWorldBounds(boost::intrusive_ptr<Caver::SceneObject> const&) */

void __thiscall Caver::Scene::UpdateObjectWorldBounds(Scene *this,intrusive_ptr *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)param_1;
  uStack_58 = *(undefined8 *)(lVar2 + 0x9c);
  local_60 = *(undefined8 *)(lVar2 + 0x94);
  if (*(char *)(lVar2 + 0x90) != '\0') {
    Rectangle::FlipHorizontally((Rectangle *)&local_60);
  }
  local_50 = *(undefined4 *)(lVar2 + 0x8c);
                    /* try { // try from 005658a0 to 006658a7 has its CatchHandler @ 00565b90 */
  uStack_4c = local_50;
  Rectangle::Transform
            ((Rectangle *)&local_60,(Vector2 *)(lVar2 + 0x70),*(float *)(lVar2 + 0x80),
             (Vector2 *)&local_50);
                    /* try { // try from 005658bc to 006658cb has its CatchHandler @ 00565c20 */
  *(undefined8 *)(lVar2 + 0xac) = uStack_58;
  *(undefined8 *)(lVar2 + 0xa4) = local_60;
  *(undefined1 *)(lVar2 + 0xb4) = 0;
  lVar2 = *(long *)param_1;
  SceneGrid::MoveObject
            ((SceneGrid *)(this + 0x360),(SceneGridEntry *)(lVar2 + 0xf8),
             (Rectangle *)(lVar2 + 0xa4),*(float *)(lVar2 + 0x78) + *(float *)(lVar2 + 0xb8));
                    /* try { // try from 005658ec to 006658f7 has its CatchHandler @ 00565b4c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


