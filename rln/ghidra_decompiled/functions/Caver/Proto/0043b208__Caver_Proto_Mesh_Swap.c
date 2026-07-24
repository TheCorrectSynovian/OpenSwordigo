/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b208
 * Function: Caver::Proto::Mesh::Swap
 * Signature: undefined __thiscall Swap(Mesh * this, Mesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::Swap(Caver::Proto::Mesh*) */

void __thiscall Caver::Proto::Mesh::Swap(Mesh *this,Mesh *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0043b208 to 0053b217 has its CatchHandler @ 0043b680 */
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap
              ((RepeatedPtrFieldBase *)(this + 0x30),(RepeatedPtrFieldBase *)(param_1 + 0x30));
                    /* try { // try from 0043b280 to 0053b28b has its CatchHandler @ 0043b488 */
    uVar2 = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x70);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x78);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
                    /* try { // try from 0043b2ac to 0053b2d3 has its CatchHandler @ 0043b3dc */
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x80);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x88);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x90);
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x98);
    *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
                    /* try { // try from 0043b2f4 to 0053b31b has its CatchHandler @ 0043b680 */
    uVar1 = *(undefined4 *)(this + 0xa0);
    *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa0) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


