//
//  requeteGoogle.cpp
//  ProjetDeGraphe
//
//  Created by Apple on 15/04/2015.
//  Copyright (c) 2015 Overflow. All rights reserved.
//

#include <stdio.h>
#include <cpprest/http_client.h>
#include <cpprest/json.h>


using namespace std;
using namespace web; // Common features like URIs.
using namespace web::http; // Common HTTP functionality
using namespace web::http::client; // HTTP client features

pplx::task<json::value> get_JSON_google_API() {
    
    // Set up the client
    http_client client(U("https://maps.googleapis.com/maps/api/directions"));
    http_request request(methods::GET);
    
    // Build request URI
    uri_builder builder(U("/json")); // U = UTF-32 encoded string literal
    builder.append_query(U("origin"), U("43.604134687,1.4454207807"));
    builder.append_query(U("destination"), U("43.6048526522,1.4452858767"));
    builder.append_query(U("alternatives"), U("true"));
    builder.append_query(U("key"), U("AIzaSyAG3bhdapKXj9TpHlic9DgluyQ0Be_Hw5A"));
    request.set_request_uri(builder.to_string());
    request.headers().add(header_names::accept, L"application/json");
    
    // Start the requeste
    return client.request(request).then([](http_response response) {
        
    });
    
    return response.extract_json();
}