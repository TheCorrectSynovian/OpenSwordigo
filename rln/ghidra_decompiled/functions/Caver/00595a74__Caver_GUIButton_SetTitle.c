/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00595a74
 * Function: Caver::GUIButton::SetTitle
 * Signature: undefined __thiscall SetTitle(GUIButton * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::SetTitle(std::string const&) */

void __thiscall Caver::GUIButton::SetTitle(GUIButton *this,string *param_1)

{
  int iVar1;
  GUILabel *this_00;
  size_t __n;
  
                    /* try { // try from 00595a90 to 00695ab7 has its CatchHandler @ 00595d58 */
  if (*(long *)(*(long *)param_1 + -0x18) == 0) {
    if (*(long **)(this + 0x140) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x140) + 0x78))();
      *(undefined8 *)(this + 0x140) = 0;
    }
  }
  else {
    this_00 = (GUILabel *)titleLabel(this);
    __n = *(size_t *)((long)*(void **)param_1 + -0x18);
    if ((__n != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar1 = memcmp(*(void **)param_1,*(void **)(this_00 + 0x100),__n), iVar1 != 0)) {
      FUN_0066a6a8(this_00 + 0x100,param_1);
      GUILabel::UpdateText(this_00);
      return;
    }
  }
                    /* try { // try from 00595afc to 00695b23 has its CatchHandler @ 00595d4c */
  return;
}


