/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043dac4
 * Function: google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>
 * Signature: Type * __thiscall Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(RepeatedPtrFieldBase * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler::Type*
   google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>()
    */

Type * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>
          (RepeatedPtrFieldBase *this)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  Type *pTVar5;
  
  iVar1 = *(int *)(this + 8);
  iVar4 = *(int *)(this + 0xc);
                    /* try { // try from 0043dad8 to 0053daff has its CatchHandler @ 0043db10 */
  if (iVar1 < iVar4) {
    *(int *)(this + 8) = iVar1 + 1;
    pTVar5 = *(Type **)(*(long *)this + (long)iVar1 * 8);
  }
  else {
                    /* try { // try from 0043db00 to 0053db13 has its CatchHandler @ 0043da84 */
    if (iVar4 == *(int *)(this + 0x10)) {
      Reserve(this,iVar4 + 1);
                    /* catch() { ... } // from try @ 0043dad8 with catch @ 0043db10 */
      iVar4 = *(int *)(this + 0xc);
    }
                    /* try { // try from 0043db14 to 0053db1b has its CatchHandler @ 0043db24 */
                    /* try { // try from 0043db1c to 0053db27 has its CatchHandler @ 0043da84 */
    *(int *)(this + 0xc) = iVar4 + 1;
    pTVar5 = operator_new(0x60);
                    /* catch() { ... } // from try @ 0043db14 with catch @ 0043db24 */
                    /* catch() { ... } // from try @ 0043dbc8 with catch @ 0043db28 */
    *(undefined **)pTVar5 = PTR_vtable_007e6b00 + 0x10;
    ExtensionSet::ExtensionSet((ExtensionSet *)(pTVar5 + 8));
    *(undefined4 *)(pTVar5 + 0x38) = 0;
    puVar2 = PTR__default_class_name__007e5328;
    *(long *)(pTVar5 + 0x48) = 0;
    puVar3 = PTR__default_label__007e6320;
    *(undefined4 *)(pTVar5 + 0x58) = 0;
    *(undefined **)(pTVar5 + 0x40) = puVar2;
    *(undefined **)(pTVar5 + 0x50) = puVar3;
    iVar1 = *(int *)(this + 8);
    *(int *)(this + 8) = iVar1 + 1;
    *(Type **)(*(long *)this + (long)iVar1 * 8) = pTVar5;
  }
                    /* try { // try from 0043db7c to 0053dba3 has its CatchHandler @ 0043dbbc */
  return pTVar5;
}


