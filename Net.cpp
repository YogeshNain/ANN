/*
 * Net.cpp
 *
 *  Created on: 14-Feb-2016
 *      Author: nain
 */

#include "Net.h"
namespace OCR{
Net::Net(const std::vector<unsigned> &topology) {
	// TODO Auto-generated constructor stub
	unsigned numofLayers = topology.size();

	for(int layerIndex=0; layerIndex < numofLayers; ++layerIndex)
	{
		net_Layers.push_back(Layer());  //Created a new Layer Now add Neurons

		unsigned numOutputs = layerIndex == topology.size() -1 ? 0 :topology[layerIndex +1];
		for(int neuronIndex =0; neuronIndex <= topology[layerIndex]; ++neuronIndex)
		{
			net_Layers.back().push_back(Neuron(numOutputs));
		}
	}
}

Net::~Net() {
	// TODO Auto-generated destructor stub
}

void Net::backProp(const std::vector<double> &targetValues)
{

}

void Net::feedForward(const std::vector<double> &inputValues)
{
	//Assign Input Values to the input layer.
	for(unsigned i=0 ; i< inputValues.size(); ++i)
	{
		net_Layers[0][i].setOutputValue(inputValues[i]);
	}

	//Now do forward propagation of Weights.

	for(unsigned layerIndex = 1; layerIndex < net_Layers.size(); ++layerIndex)
	{
		Layer &previousLayer = net_Layers[layerIndex -1];
		for(unsigned neuronIndex = 0; neuronIndex <= net_Layers[layerIndex].size();++neuronIndex)
		{
			net_Layers[layerIndex][neuronIndex].feedForward(previousLayer);
		}
	}

}

void Net::getResults(const std::vector<double> &resultValues) const
{

}

}

