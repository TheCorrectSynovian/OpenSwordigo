/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a7934
 * Function: boost::detail::shared_count::shared_count<Caver::ProfileManager>
 * Signature: undefined __thiscall shared_count<Caver::ProfileManager>(shared_count * this, ProfileManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::ProfileManager>(Caver::ProfileManager*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::ProfileManager>
          (shared_count *this,ProfileManager *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined8 *)this = 0;
                    /* try { // try from 004a794c to 005a795f has its CatchHandler @ 004a884c */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6c38;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
                    /* try { // try from 004a7970 to 005a797b has its CatchHandler @ 004a8814 */
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


