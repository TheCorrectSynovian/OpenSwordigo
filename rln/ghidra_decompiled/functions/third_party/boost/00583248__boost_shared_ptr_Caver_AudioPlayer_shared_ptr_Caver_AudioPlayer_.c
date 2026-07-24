/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583248
 * Function: boost::shared_ptr<Caver::AudioPlayer>::shared_ptr<Caver::AudioPlayer>
 * Signature: undefined __thiscall shared_ptr<Caver::AudioPlayer>(shared_ptr<Caver::AudioPlayer> * this, AudioPlayer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::AudioPlayer>::shared_ptr<Caver::AudioPlayer>(Caver::AudioPlayer*) */

void __thiscall
boost::shared_ptr<Caver::AudioPlayer>::shared_ptr<Caver::AudioPlayer>
          (shared_ptr<Caver::AudioPlayer> *this,AudioPlayer *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(AudioPlayer **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e7e28;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  return;
}


