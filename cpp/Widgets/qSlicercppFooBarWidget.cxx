/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicercppFooBarWidget.h"
#include "ui_qSlicercppFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_cpp
class qSlicercppFooBarWidgetPrivate
  : public Ui_qSlicercppFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicercppFooBarWidget);
protected:
  qSlicercppFooBarWidget* const q_ptr;

public:
  qSlicercppFooBarWidgetPrivate(
    qSlicercppFooBarWidget& object);
  virtual void setupUi(qSlicercppFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicercppFooBarWidgetPrivate
::qSlicercppFooBarWidgetPrivate(
  qSlicercppFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicercppFooBarWidgetPrivate
::setupUi(qSlicercppFooBarWidget* widget)
{
  this->Ui_qSlicercppFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicercppFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicercppFooBarWidget
::qSlicercppFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicercppFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicercppFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicercppFooBarWidget
::~qSlicercppFooBarWidget()
{
}
