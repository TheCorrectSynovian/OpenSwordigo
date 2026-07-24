/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bb450
 * Function: std::list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>::erase
 * Signature: undefined __thiscall erase(list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>> * this, _List_iterator param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::list<Caver::TargetAction<void (bool, std::string const&)>,
   std::allocator<Caver::TargetAction<void (bool, std::string const&)> >
   >::erase(std::_List_iterator<Caver::TargetAction<void (bool, std::string const&)> >) */

undefined8 __thiscall
std::
list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
::erase(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  FUN_0062a9c8(param_2);
  uVar2 = param_2[4];
  if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 005baf98 with catch @ 005bb474 */
    if (((uVar2 & 1) == 0) && (*(code **)(uVar2 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar2 & 0xfffffffffffffffe))(param_2 + 5,param_2 + 5,2);
    }
                    /* try { // try from 005bb494 to 006bb4bb has its CatchHandler @ 005bb754 */
    param_2[4] = 0;
  }
  plVar1 = (long *)param_2[3];
  if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[2], plVar1[2] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x18))();
  }
                    /* try { // try from 005bb4bc to 006bb6cb has its CatchHandler @ 005bad18 */
                    /* catch() { ... } // from try @ 005bb150 with catch @ 005bb4c0 */
  operator_delete(param_2);
                    /* catch() { ... } // from try @ 005bb144 with catch @ 005bb4c4 */
                    /* catch() { ... } // from try @ 005bb11c with catch @ 005bb4c8 */
  return uVar4;
}


