/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055ec2c
 * Function: std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>> * this, __normal_iterator param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<boost::shared_ptr<Caver::ObjectLibrary>,
   std::allocator<boost::shared_ptr<Caver::ObjectLibrary> >
   >::_M_erase(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,
   std::vector<boost::shared_ptr<Caver::ObjectLibrary>,
   std::allocator<boost::shared_ptr<Caver::ObjectLibrary> > > >) */

long __thiscall
std::
vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
::_M_erase(vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
           *this,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
                    /* try { // try from 0055ec38 to 0065ec3f has its CatchHandler @ 0055f074 */
  puVar2 = *(undefined8 **)(this + 8);
  puVar5 = (undefined8 *)(param_2 + 0x10);
  puVar6 = puVar5;
                    /* try { // try from 0055ec58 to 0065ec63 has its CatchHandler @ 0055f06c */
  if ((puVar5 != puVar2) && (puVar6 = puVar2, 0 < (long)puVar2 - (long)puVar5)) {
                    /* try { // try from 0055ec64 to 0065ec6b has its CatchHandler @ 0055f054 */
    lVar7 = ((ulong)((long)puVar2 - (long)puVar5) >> 4) + 1;
    do {
                    /* try { // try from 0055ec6c to 0065ec77 has its CatchHandler @ 0055f06c */
      uVar1 = *puVar5;
      lVar3 = puVar5[1];
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
      }
      plVar4 = (long *)puVar5[-1];
      puVar5[-2] = uVar1;
      puVar5[-1] = lVar3;
                    /* try { // try from 0055ec88 to 0065ec8f has its CatchHandler @ 0055efe0 */
                    /* try { // try from 0055ec90 to 0065eca3 has its CatchHandler @ 0055ef80 */
      if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 0055eca4 to 0065ecb3 has its CatchHandler @ 0055ef24 */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar3 = plVar4[2];
        plVar4[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar7 = lVar7 + -1;
      puVar5 = puVar5 + 2;
    } while (1 < lVar7);
    puVar6 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)(this + 8) = puVar6 + -2;
  plVar4 = (long *)puVar6[-1];
                    /* try { // try from 0055ecf4 to 0065ecf7 has its CatchHandler @ 0055ef10 */
                    /* try { // try from 0055ed00 to 0065ed07 has its CatchHandler @ 0055ef14 */
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* try { // try from 0055ed28 to 0065ed4f has its CatchHandler @ 0055f06c */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  return param_2;
}


