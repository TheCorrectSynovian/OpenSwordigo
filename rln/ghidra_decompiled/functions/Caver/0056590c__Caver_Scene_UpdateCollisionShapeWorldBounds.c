/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056590c
 * Function: Caver::Scene::UpdateCollisionShapeWorldBounds
 * Signature: undefined __thiscall UpdateCollisionShapeWorldBounds(Scene * this, CollisionShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::UpdateCollisionShapeWorldBounds(Caver::CollisionShapeComponent*) */

void __thiscall
Caver::Scene::UpdateCollisionShapeWorldBounds(Scene *this,CollisionShapeComponent *param_1)

{
                    /* try { // try from 0056591c to 0066591f has its CatchHandler @ 00565b80 */
  CollisionShapeComponent::UpdateWorldAABB(param_1);
                    /* try { // try from 00565940 to 0066594b has its CatchHandler @ 00565b44 */
  if (*(long *)(param_1 + 400) != 0) {
    SceneGrid::MoveObject
              ((SceneGrid *)(this + 0x3a0),(SceneGridEntry *)(param_1 + 400),
               (Rectangle *)(param_1 + 0x168),0.0);
    return;
  }
  SceneGrid::AddObject
            ((SceneGrid *)(this + 0x3a0),(SceneGridEntry *)(param_1 + 400),
             (Rectangle *)(param_1 + 0x168),0.0);
  return;
}


