/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QtPlugin>

// cpp Logic includes
#include <vtkSlicercppLogic.h>

// cpp includes
#include "qSlicercppModule.h"
#include "qSlicercppModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicercppModule, qSlicercppModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicercppModulePrivate
{
public:
  qSlicercppModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicercppModulePrivate methods

//-----------------------------------------------------------------------------
qSlicercppModulePrivate::qSlicercppModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicercppModule methods

//-----------------------------------------------------------------------------
qSlicercppModule::qSlicercppModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicercppModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicercppModule::~qSlicercppModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicercppModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicercppModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicercppModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicercppModule::icon() const
{
  return QIcon(":/Icons/cpp.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicercppModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicercppModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicercppModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicercppModule
::createWidgetRepresentation()
{
  return new qSlicercppModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicercppModule::createLogic()
{
  return vtkSlicercppLogic::New();
}
