/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00561208
 * Function: Caver::ObjectTemplate::~ObjectTemplate
 * Signature: undefined __thiscall ~ObjectTemplate(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectTemplate::~ObjectTemplate() */

void __thiscall Caver::ObjectTemplate::~ObjectTemplate(ObjectTemplate *this)

{
                    /* try { // try from 00561210 to 00661223 has its CatchHandler @ 00561560 */
  SceneObject::~SceneObject((SceneObject *)this);
                    /* try { // try from 00561228 to 00661233 has its CatchHandler @ 005614f0 */
  operator_delete(this);
  return;
}


