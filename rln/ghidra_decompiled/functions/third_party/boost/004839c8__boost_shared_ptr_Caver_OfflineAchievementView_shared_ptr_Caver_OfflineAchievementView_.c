/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004839c8
 * Function: boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>
 * Signature: undefined __thiscall shared_ptr<Caver::OfflineAchievementView>(shared_ptr<Caver::OfflineAchievementView> * this, OfflineAchievementView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>(Caver::OfflineAchievementView*)
    */

void __thiscall
boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>
          (shared_ptr<Caver::OfflineAchievementView> *this,OfflineAchievementView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(OfflineAchievementView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 004839e0 to 00583a9f has its CatchHandler @ 004839e0
                       catch() { ... } // from try @ 004839e0 with catch @ 004839e0
                       catch() { ... } // from try @ 00483b4c with catch @ 004839e0
                       catch() { ... } // from try @ 00483e18 with catch @ 004839e0 */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6340;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (OfflineAchievementView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::OfflineAchievementView,Caver::OfflineAchievementView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


