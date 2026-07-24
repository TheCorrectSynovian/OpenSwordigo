/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bbb00
 * Function: boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>
 * Signature: undefined __thiscall shared_ptr<Caver::Proto::PlayerProfile>(shared_ptr<Caver::Proto::PlayerProfile> * this, PlayerProfile * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile*)
    */

void __thiscall
boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>
          (shared_ptr<Caver::Proto::PlayerProfile> *this,PlayerProfile *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(PlayerProfile **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4fb0;
                    /* catch() { ... } // from try @ 005bba98 with catch @ 005bbb2c */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  return;
}


