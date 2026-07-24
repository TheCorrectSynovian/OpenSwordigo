/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045ab64
 * Function: boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>
 * Signature: undefined __thiscall shared_ptr<Caver::SkillPickerViewController>(shared_ptr<Caver::SkillPickerViewController> * this, SkillPickerViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController*)
    */

void __thiscall
boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>
          (shared_ptr<Caver::SkillPickerViewController> *this,SkillPickerViewController *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(SkillPickerViewController **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e50b0;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (SkillPickerViewController *)0x0) {
    enable_shared_from_this<Caver::GUIViewController>::
    _internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>
              ((enable_shared_from_this<Caver::GUIViewController> *)(param_1 + 8),(shared_ptr *)this
               ,param_1);
  }
                    /* try { // try from 0045abc4 to 0055abd7 has its CatchHandler @ 0045b3a8 */
  return;
}


