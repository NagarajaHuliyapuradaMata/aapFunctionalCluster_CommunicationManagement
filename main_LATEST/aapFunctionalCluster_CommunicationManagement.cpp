/******************************************************************************/
/* File   : aapFunctionalCluster_CommunicationManagement.cpp                  */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_CommunicationManagement_VerificationStatusConfigurationByDataId.hpp"
/*
#include "interface_CommunicationManagement_VerificationStatusConfigurationByFreshnessId.hpp"
*/
#include "interface_CommunicationManagement_VerificationStatus.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_CommunicationManagement:
      public interface_CommunicationManagement_VerificationStatusConfigurationByDataId
   ,  public interface_CommunicationManagement_VerificationStatus
/*
   ,  public interface_CommunicationManagement_VerificationStatusConfigurationByFreshnessId
*/
{
   void VerifyStatusOverride (void);
/*
   void VerifyStatusOverride (void);
*/
   void VerificationStatus   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void aapFunctionalCluster_CommunicationManagement::VerifyStatusOverride(void){
}

/*
void aapFunctionalCluster_CommunicationManagement::VerifyStatusOverride(void){
}
*/

void aapFunctionalCluster_CommunicationManagement::VerificationStatus(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
