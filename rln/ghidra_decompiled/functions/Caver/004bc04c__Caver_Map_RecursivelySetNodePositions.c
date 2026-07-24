/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bc04c
 * Function: Caver::Map::RecursivelySetNodePositions
 * Signature: undefined __thiscall RecursivelySetNodePositions(Map * this, MapNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Map::RecursivelySetNodePositions(Caver::MapNode*) */

void __thiscall Caver::Map::RecursivelySetNodePositions(Map *this,MapNode *param_1)

{
  MapNode *pMVar1;
  MapNode *pMVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  Vector2 *this_00;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 local_80;
  
                    /* try { // try from 004bc04c to 005bc057 has its CatchHandler @ 004bbb48 */
                    /* catch() { ... } // from try @ 004bbfc0 with catch @ 004bc054 */
  lVar5 = tpidr_el0;
  lVar6 = *(long *)(lVar5 + 0x28);
  lVar10 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != lVar10) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      if (((string *)(lVar10 + lVar8))[0x10] == (string)0x0) {
        this_00 = (Vector2 *)
                  std::
                  map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
                  ::operator[]((map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
                                *)(this + 0x18),(string *)(lVar10 + lVar8));
        pMVar2 = *(MapNode **)this_00;
        plVar3 = *(long **)(this_00 + 8);
        if ((plVar3 != (long *)0x0) && (plVar3[1] == 0)) {
          this_00 = (Vector2 *)(**(code **)(*plVar3 + 0x10))(plVar3);
          lVar7 = plVar3[2];
          plVar3[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            this_00 = (Vector2 *)(**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
        if ((pMVar2 != (MapNode *)0x0) && (pMVar2[0x5c] == (MapNode)0x0)) {
          pMVar2[0x5c] = (MapNode)0x1;
          if (pMVar2[0x48] == (MapNode)0x0) {
            fVar11 = 0.0;
            uVar4 = *(int *)(lVar10 + lVar8 + 8) - 2;
            if (uVar4 < 7) {
              fVar11 = *(float *)(&DAT_00691f50 + (long)(int)uVar4 * 4);
            }
            uVar12 = *(undefined8 *)(param_1 + 8);
            Vector2::FromAngle(this_00,fVar11);
            Vector2::Rounded();
            uVar12 = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)local_80 >> 0x20),
                              (float)uVar12 + (float)local_80);
          }
          else {
            pMVar1 = param_1;
            if (*(MapNode **)(param_1 + 0x50) != (MapNode *)0x0) {
              pMVar1 = *(MapNode **)(param_1 + 0x50);
            }
            *(MapNode **)(pMVar2 + 0x50) = pMVar1;
            uVar12 = *(undefined8 *)(param_1 + 8);
          }
          *(undefined8 *)(pMVar2 + 8) = uVar12;
          RecursivelySetNodePositions(this,pMVar2);
        }
      }
      lVar10 = *(long *)(param_1 + 0x30);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar9 < (ulong)((*(long *)(param_1 + 0x38) - lVar10 >> 3) * -0x5555555555555555));
  }
  if (*(long *)(lVar5 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


