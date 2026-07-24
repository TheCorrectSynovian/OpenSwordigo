/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004860e0
 * Function: boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>
 * Signature: undefined __thiscall shared_ptr<Caver::OfflineAchievementsView>(shared_ptr<Caver::OfflineAchievementsView> * this, OfflineAchievementsView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>(Caver::OfflineAchievementsView*)
    */

void __thiscall
boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>
          (shared_ptr<Caver::OfflineAchievementsView> *this,OfflineAchievementsView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(OfflineAchievementsView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5bb0;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (OfflineAchievementsView *)0x0) {
                    /* try { // try from 0048612c to 00586133 has its CatchHandler @ 004862f0 */
                    /* try { // try from 00486134 to 005861c7 has its CatchHandler @ 00485fe0 */
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::OfflineAchievementsView,Caver::OfflineAchievementsView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


